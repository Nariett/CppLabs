#pragma once

namespace ARRTAbl {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Microsoft::VisualBasic::Compatibility::VB6::FileListBox^ fileListBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->fileListBox1 = (gcnew Microsoft::VisualBasic::Compatibility::VB6::FileListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// fileListBox1
			// 
			this->fileListBox1->FormattingEnabled = true;
			this->fileListBox1->Location = System::Drawing::Point(12, 6);
			this->fileListBox1->Name = L"fileListBox1";
			this->fileListBox1->Pattern = L"*.*";
			this->fileListBox1->Size = System::Drawing::Size(220, 329);
			this->fileListBox1->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(239, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(346, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Generate random number";
			this->button1->UseMnemonic = false;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->UseWaitCursor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(240, 257);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(250, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Create new array ";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(239, 39);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(249, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Add in array ";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(241, 312);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(249, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Show array";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(348, 229);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(142, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Compare";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(240, 286);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(250, 20);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(241, 231);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 8;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(502, 347);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->fileListBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			int n = 0;
			long int* m = nullptr;
			int i = 0;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Random^ r = gcnew Random();
		int a = 10 + (r->Next()) % (99 - 10 + 1);
		textBox1->Text = a.ToString();
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (m != nullptr)
		{
			delete[]m;
			m = nullptr;
			n = 0;
			label1->Text = "";
			label1->Text = "Delete array";
		}
		this->n = Convert::ToInt32(this->textBox1->Text);
		m = new long int[n];
		if (!m)
		{
			MessageBox::Show("faild create array " + n.ToString() + " element");
			return;
		}
		i = 0;
		label1->Text = "Create array in " + n.ToString() + " elements";
	}
	catch (System::FormatException^ e)
	{
		MessageBox::Show(e->Message);
	}
	catch (System::Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		if (i < n && n>0 && m != nullptr)
		{
			m[i] = Convert::ToInt32(this->textBox1->Text);
			i++;
			label1->Text = "";
			label1->Text = "filled elemnet є" + i.ToString() + " from " + n.ToString();
		}
		else
		{
			MessageBox::Show("Dimension array " + n + " Create and not filled");
		}
	}
	catch (System::FormatException^ e)
	{
		MessageBox::Show(e->Message);
	}
	catch (System::Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox2->ReadOnly = true;
	this->textBox2->Clear();
	this->textBox1->Clear();
	for (int j = 0; j < i && j < n; j++)
	{
		this->textBox2->Text += m[j].ToString() + " ";
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	int q = Convert::ToInt32(this->textBox3->Text);
	int w = 0;
	for (int j = 0; j < i && j < n; j++)
	{
		if (m[j] > q)
		{
			w++;
		}
	}
	this->textBox2->Text += w;
}
	};
}
