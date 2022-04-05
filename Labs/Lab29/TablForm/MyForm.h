#pragma once

namespace TablForm {

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nextToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ playToolStripMenuItem;
	private: AxWMPLib::AxWindowsMediaPlayer^ axWindowsMediaPlayer1;
	private: Microsoft::VisualBasic::Compatibility::VB6::FileListBox^ fileListBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ nextToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ playToolStripMenuItem1;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::MenuStrip^ menuStrip3;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ nextToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ playToolStripMenuItem2;

	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nextToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->playToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->fileListBox1 = (gcnew Microsoft::VisualBasic::Compatibility::VB6::FileListBox());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nextToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->playToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->menuStrip3 = (gcnew System::Windows::Forms::MenuStrip());
			this->openToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nextToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->playToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			this->menuStrip2->SuspendLayout();
			this->menuStrip3->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 48);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(666, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(12, 20);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->openToolStripMenuItem->Text = L"Open";
			// 
			// nextToolStripMenuItem
			// 
			this->nextToolStripMenuItem->Name = L"nextToolStripMenuItem";
			this->nextToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->nextToolStripMenuItem->Text = L"Next";
			// 
			// playToolStripMenuItem
			// 
			this->playToolStripMenuItem->Name = L"playToolStripMenuItem";
			this->playToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->playToolStripMenuItem->Text = L"Play";
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(12, 27);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(499, 341);
			this->axWindowsMediaPlayer1->TabIndex = 1;
			// 
			// fileListBox1
			// 
			this->fileListBox1->FormattingEnabled = true;
			this->fileListBox1->Location = System::Drawing::Point(517, 27);
			this->fileListBox1->Name = L"fileListBox1";
			this->fileListBox1->Pattern = L"*.*";
			this->fileListBox1->Size = System::Drawing::Size(120, 342);
			this->fileListBox1->TabIndex = 2;
			this->fileListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::fileListBox1_SelectedindexChanges);
			// 
			// menuStrip2
			// 
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem1 });
			this->menuStrip2->Location = System::Drawing::Point(0, 24);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(666, 24);
			this->menuStrip2->TabIndex = 3;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// fileToolStripMenuItem1
			// 
			this->fileToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openToolStripMenuItem1,
					this->nextToolStripMenuItem1, this->playToolStripMenuItem1
			});
			this->fileToolStripMenuItem1->Name = L"fileToolStripMenuItem1";
			this->fileToolStripMenuItem1->Size = System::Drawing::Size(12, 20);
			// 
			// openToolStripMenuItem1
			// 
			this->openToolStripMenuItem1->Name = L"openToolStripMenuItem1";
			this->openToolStripMenuItem1->Size = System::Drawing::Size(103, 22);
			this->openToolStripMenuItem1->Text = L"Open";
			this->openToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem1_Click);
			// 
			// nextToolStripMenuItem1
			// 
			this->nextToolStripMenuItem1->Name = L"nextToolStripMenuItem1";
			this->nextToolStripMenuItem1->Size = System::Drawing::Size(103, 22);
			this->nextToolStripMenuItem1->Text = L"Next";
			// 
			// playToolStripMenuItem1
			// 
			this->playToolStripMenuItem1->Name = L"playToolStripMenuItem1";
			this->playToolStripMenuItem1->Size = System::Drawing::Size(103, 22);
			this->playToolStripMenuItem1->Text = L"Play";
			// 
			// menuStrip3
			// 
			this->menuStrip3->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->openToolStripMenuItem2 });
			this->menuStrip3->Location = System::Drawing::Point(0, 0);
			this->menuStrip3->Name = L"menuStrip3";
			this->menuStrip3->Size = System::Drawing::Size(666, 24);
			this->menuStrip3->TabIndex = 4;
			this->menuStrip3->Text = L"menuStrip3";
			// 
			// openToolStripMenuItem2
			// 
			this->openToolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openToolStripMenuItem3,
					this->nextToolStripMenuItem2, this->playToolStripMenuItem2
			});
			this->openToolStripMenuItem2->Name = L"openToolStripMenuItem2";
			this->openToolStripMenuItem2->Size = System::Drawing::Size(37, 20);
			this->openToolStripMenuItem2->Text = L"File";
			// 
			// openToolStripMenuItem3
			// 
			this->openToolStripMenuItem3->Name = L"openToolStripMenuItem3";
			this->openToolStripMenuItem3->Size = System::Drawing::Size(180, 22);
			this->openToolStripMenuItem3->Text = L"Open";
			// 
			// nextToolStripMenuItem2
			// 
			this->nextToolStripMenuItem2->Name = L"nextToolStripMenuItem2";
			this->nextToolStripMenuItem2->Size = System::Drawing::Size(180, 22);
			this->nextToolStripMenuItem2->Text = L"Next";
			// 
			// playToolStripMenuItem2
			// 
			this->playToolStripMenuItem2->Name = L"playToolStripMenuItem2";
			this->playToolStripMenuItem2->Size = System::Drawing::Size(180, 22);
			this->playToolStripMenuItem2->Text = L"Play";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(666, 396);
			this->Controls->Add(this->fileListBox1);
			this->Controls->Add(this->axWindowsMediaPlayer1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->menuStrip2);
			this->Controls->Add(this->menuStrip3);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->menuStrip3->ResumeLayout(false);
			this->menuStrip3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void openToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		fileListBox1->Pattern = "*.mp4";
		folderBrowserDialog1->ShowDialog();
		fileListBox1->FileName = folderBrowserDialog1->SelectedPath;
	}
private: System::Void fileListBox1_SelectedindexChanges(System::Object^ sender, System::EventArgs^ e) {
	axWindowsMediaPlayer1->URL = folderBrowserDialog1->SelectedPath + "\\" + fileListBox1->SelectedItem->ToString();
}
private: System::Void axWindowsMediaPlayer1_StatusChange(System::Object^ sender, System::EventArgs^ e) {
	this->Text = "Played " + axWindowsMediaPlayer1->status;


}
private: System::Void следующийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		fileListBox1->SelectedIndex += 1;
	}
	catch (System::ArgumentOutOfRangeException^ e)
	{
		MessageBox::Show("List is over:");
	}
	catch (System::Exception^ e)
	{
		MessageBox::Show("Error " + e->Message);
	}
}
private: System::Void проигрыватьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		axWindowsMediaPlayer1->Ctlcontrols->play();
	}
	catch (System::Exception^ e)
	{
		MessageBox::Show("Error " + e->Message);
	}
}

};
}
