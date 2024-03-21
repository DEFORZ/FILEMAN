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
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::TextBox^ textBoxFileContent;
	protected:

	private: System::Windows::Forms::Button^ buttonOpenFile;
	private: System::Windows::Forms::Button^ buttonSaveFile;
	private: System::Windows::Forms::TextBox^ textBoxSearch;
	private: System::Windows::Forms::Button^ buttonSearch;



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
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBoxFileContent = (gcnew System::Windows::Forms::TextBox());
			this->buttonOpenFile = (gcnew System::Windows::Forms::Button());
			this->buttonSaveFile = (gcnew System::Windows::Forms::Button());
			this->textBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// textBoxFileContent
			// 
			this->textBoxFileContent->Location = System::Drawing::Point(33, 12);
			this->textBoxFileContent->Name = L"textBoxFileContent";
			this->textBoxFileContent->Size = System::Drawing::Size(171, 20);
			this->textBoxFileContent->TabIndex = 0;
			// 
			// buttonOpenFile
			// 
			this->buttonOpenFile->Location = System::Drawing::Point(210, 10);
			this->buttonOpenFile->Name = L"buttonOpenFile";
			this->buttonOpenFile->Size = System::Drawing::Size(75, 23);
			this->buttonOpenFile->TabIndex = 1;
			this->buttonOpenFile->Text = L"open";
			this->buttonOpenFile->UseVisualStyleBackColor = true;
			// 
			// buttonSaveFile
			// 
			this->buttonSaveFile->Location = System::Drawing::Point(33, 58);
			this->buttonSaveFile->Name = L"buttonSaveFile";
			this->buttonSaveFile->Size = System::Drawing::Size(75, 23);
			this->buttonSaveFile->TabIndex = 2;
			this->buttonSaveFile->Text = L"save";
			this->buttonSaveFile->UseVisualStyleBackColor = true;
			this->buttonSaveFile->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBoxSearch
			// 
			this->textBoxSearch->Location = System::Drawing::Point(673, 12);
			this->textBoxSearch->Name = L"textBoxSearch";
			this->textBoxSearch->Size = System::Drawing::Size(215, 20);
			this->textBoxSearch->TabIndex = 3;
			// 
			// buttonSearch
			// 
			this->buttonSearch->Location = System::Drawing::Point(592, 12);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(75, 23);
			this->buttonSearch->TabIndex = 4;
			this->buttonSearch->Text = L"search";
			this->buttonSearch->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(920, 367);
			this->Controls->Add(this->buttonSearch);
			this->Controls->Add(this->textBoxSearch);
			this->Controls->Add(this->buttonSaveFile);
			this->Controls->Add(this->buttonOpenFile);
			this->Controls->Add(this->textBoxFileContent);
			this->Name = L"MyForm";
			this->Text = L"FILEMAN";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
