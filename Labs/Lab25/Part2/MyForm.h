#pragma once

namespace Part2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;

	private:
		System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(225, 72);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(413, 72);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 75);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Resistor 1";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(119, 75);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"Resistor 2";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(307, 75);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 4;
			this->textBox3->Text = L"Result";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(143, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(264, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Calculation of parallel resistance of resistors";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(531, 180);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			int a = Convert::ToDouble(this->textBox1->Text);
			int b = Convert::ToDouble(this->textBox2->Text);
			if (a < 0 || b < 0)
			{
				MessageBox::Show("Resistance is zero or less");
				Button2_Click(sender, System::EventArgs::Empty);
			}
			else
			{
				double c = (a * b) / (a + b);
				this->textBox3->Clear();
				this->textBox3->Text = c.ToString();
				this->Text = c.ToString();
			}
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show(e->Message->ToString(), "Data format error");
			Button2_Click(sender, System::EventArgs::Empty);
		}
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
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
