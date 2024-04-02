#pragma once

namespace FILEMAN {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// dob izm

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Label_T1;
	private: System::Windows::Forms::Button^ buttonOpenFile;
	private: System::Windows::Forms::Button^ buttonSaveFile;
	private: System::Windows::Forms::TextBox^ textBoxFileContent;
	private: System::Windows::Forms::TextBox^ textBoxSearch;
	private: System::Windows::Forms::ListBox^ listBoxFiles;
	private: System::Windows::Forms::Label^ labelDirectory;


	protected:

	protected:


	protected:








	protected:



	protected:

	protected:

	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Label_T1 = (gcnew System::Windows::Forms::Label());
			this->buttonOpenFile = (gcnew System::Windows::Forms::Button());
			this->buttonSaveFile = (gcnew System::Windows::Forms::Button());
			this->textBoxFileContent = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->listBoxFiles = (gcnew System::Windows::Forms::ListBox());
			this->labelDirectory = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Label_T1
			// 
			this->Label_T1->AutoSize = true;
			this->Label_T1->Location = System::Drawing::Point(12, 9);
			this->Label_T1->Name = L"Label_T1";
			this->Label_T1->Size = System::Drawing::Size(81, 13);
			this->Label_T1->TabIndex = 0;
			this->Label_T1->Text = L"Текст в файле";
			this->Label_T1->Click += gcnew System::EventHandler(this, &MyForm::Label_T1_Click);
			// 
			// buttonOpenFile
			// 
			this->buttonOpenFile->Location = System::Drawing::Point(346, 22);
			this->buttonOpenFile->Name = L"buttonOpenFile";
			this->buttonOpenFile->Size = System::Drawing::Size(75, 23);
			this->buttonOpenFile->TabIndex = 1;
			this->buttonOpenFile->Text = L"button1";
			this->buttonOpenFile->UseVisualStyleBackColor = true;
			this->buttonOpenFile->Click += gcnew System::EventHandler(this, &MyForm::buttonOpenFile_Click);
			// 
			// buttonSaveFile
			// 
			this->buttonSaveFile->Location = System::Drawing::Point(118, 23);
			this->buttonSaveFile->Name = L"buttonSaveFile";
			this->buttonSaveFile->Size = System::Drawing::Size(75, 23);
			this->buttonSaveFile->TabIndex = 2;
			this->buttonSaveFile->Text = L"button12";
			this->buttonSaveFile->UseVisualStyleBackColor = true;
			this->buttonSaveFile->Click += gcnew System::EventHandler(this, &MyForm::buttonSaveFile_Click);
			// 
			// textBoxFileContent
			// 
			this->textBoxFileContent->Location = System::Drawing::Point(8, 25);
			this->textBoxFileContent->Name = L"textBoxFileContent";
			this->textBoxFileContent->Size = System::Drawing::Size(104, 20);
			this->textBoxFileContent->TabIndex = 3;
			// 
			// textBoxSearch
			// 
			this->textBoxSearch->Location = System::Drawing::Point(427, 22);
			this->textBoxSearch->Name = L"textBoxSearch";
			this->textBoxSearch->Size = System::Drawing::Size(100, 20);
			this->textBoxSearch->TabIndex = 4;
			this->textBoxSearch->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxSearch_TextChanged);
			// 
			// listBoxFiles
			// 
			this->listBoxFiles->FormattingEnabled = true;
			this->listBoxFiles->Location = System::Drawing::Point(12, 122);
			this->listBoxFiles->Name = L"listBoxFiles";
			this->listBoxFiles->Size = System::Drawing::Size(515, 95);
			this->listBoxFiles->TabIndex = 5;
			this->listBoxFiles->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBoxFiles_SelectedIndexChanged);
			// 
			// labelDirectory
			// 
			this->labelDirectory->AutoSize = true;
			this->labelDirectory->Location = System::Drawing::Point(461, 6);
			this->labelDirectory->Name = L"labelDirectory";
			this->labelDirectory->Size = System::Drawing::Size(35, 13);
			this->labelDirectory->TabIndex = 7;
			this->labelDirectory->Text = L"label2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(539, 229);
			this->Controls->Add(this->labelDirectory);
			this->Controls->Add(this->listBoxFiles);
			this->Controls->Add(this->textBoxSearch);
			this->Controls->Add(this->textBoxFileContent);
			this->Controls->Add(this->buttonSaveFile);
			this->Controls->Add(this->buttonOpenFile);
			this->Controls->Add(this->Label_T1);
			this->Name = L"MyForm";
			this->Text = L"FILEMAN";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void buttonOpenFile_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
	openFileDialog1->Filter = "Text Files|*.txt|All Files|*.*";
	openFileDialog1->FilterIndex = 1;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		String^ fileName = openFileDialog1->FileName;
		try
		{
			StreamReader^ sr = gcnew StreamReader(fileName);
			textBoxFileContent->Text = sr->ReadToEnd();
			sr->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: Could not read file from disk. Original error: " + ex->Message);
		}
	}
}
private: System::Void buttonSaveFile_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	saveFileDialog1->Filter = "Text Files|*.txt|All Files|*.*";
	saveFileDialog1->FilterIndex = 1;
	saveFileDialog1->RestoreDirectory = true;

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		String^ fileName = saveFileDialog1->FileName;
		try
		{
			StreamWriter^ sw = gcnew StreamWriter(fileName);
			sw->Write(textBoxFileContent->Text);
			sw->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: Could not save file to disk. Original error: " + ex->Message);
		}
	}
}
private: System::Void textBoxSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ searchPattern = textBoxSearch->Text;
	String^ selectedDirectory = labelDirectory->Text;

	if (Directory::Exists(selectedDirectory))
	{
		array<String^>^ files = Directory::GetFiles(selectedDirectory, searchPattern);
		listBoxFiles->Items->Clear();
		listBoxFiles->Items->AddRange(files);
	}
	else
	{
		MessageBox::Show("Selected directory does not exist.");
	}

}
private: System::Void listBoxFiles_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label_T1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
