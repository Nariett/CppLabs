#pragma once

namespace Part1 {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button6;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(161, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Show text ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 42);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Hide text";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 72);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Change color";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 102);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(116, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Close";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(164, 54);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(79, 17);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"White/Red";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(164, 78);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(55, 17);
			this->checkBox2->TabIndex = 6;
			this->checkBox2->Text = L"Green";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(164, 102);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(57, 17);
			this->checkBox3->TabIndex = 7;
			this->checkBox3->Text = L"Yellow";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(288, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(182, 94);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Information about program";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 23);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(90, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Developer";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 47);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(87, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Tehnology";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 151);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(79, 20);
			this->textBox1->TabIndex = 9;
			this->textBox1->Text = L"Divisible ";
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textBox1_MouseClick);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(117, 151);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(79, 20);
			this->textBox2->TabIndex = 10;
			this->textBox2->Text = L"Divider";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(228, 151);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(116, 23);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Calculate";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(384, 151);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(151, 20);
			this->textBox3->TabIndex = 12;
			this->textBox3->Text = L"Result (root number";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(564, 149);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(116, 23);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Clear";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(760, 257);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "Buttin works ";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->BackColor == SystemColors::ButtonFace)
		{
			this->BackColor = Color::Red;
		}
		else
		{
			this->BackColor = SystemColors::ButtonFace;
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->BackColor == Color::Red)
		{
			this->BackColor = SystemColors::ButtonFace;
		}
		else
		{
			this->BackColor = Color::Red;
		}
		this->checkBox2->CheckState = CheckState::Unchecked;
		this->checkBox3->CheckState = CheckState::Unchecked;
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = Color::Green;
		this->checkBox1->CheckState = CheckState::Unchecked;
		this->checkBox3->CheckState = CheckState::Unchecked;

	}
	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = Color::Yellow;
		this->checkBox1->CheckState = CheckState::Unchecked;
		this->checkBox2->CheckState = CheckState::Unchecked;
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->Text = "My Form";
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->Text = "Samoilov A.S";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			double a = Convert::ToDouble(this->textBox1->Text);
			double b = Convert::ToDouble(this->textBox2->Text);
			if (b == 0 || a / b < 0)
			{
				MessageBox::Show("Attempt to divide by zero");
				button6_Click(sender, System::EventArgs::Empty);
			}
			else
			{
				double c = Math::Sqrt(a / b);
				this->textBox3->Clear();
				this->textBox3->Text = c.ToString();
				this->Text = c.ToString();
			}
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show(e->Message->ToString(), "Data format error");
			button5_Click(sender, System::EventArgs::Empty);
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Clear();
		this->textBox2->Clear();
		this->textBox3->Clear();
		this->textBox3->Text = "Result";
	}
	private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->textBox1->Clear();
	}
	private: System::Void textBox2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->textBox2->Clear();
	}

	};
}
