#pragma once

namespace FILEMAN {

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
	private: System::Windows::Forms::Label^ Label_T1;
	private: System::Windows::Forms::Button^ button_main1;
	protected:

	protected:

	protected:


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
			this->Label_T1 = (gcnew System::Windows::Forms::Label());
			this->button_main1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Label_T1
			// 
			this->Label_T1->AutoSize = true;
			this->Label_T1->Location = System::Drawing::Point(26, 9);
			this->Label_T1->Name = L"Label_T1";
			this->Label_T1->Size = System::Drawing::Size(35, 13);
			this->Label_T1->TabIndex = 0;
			this->Label_T1->Text = L"TEXT";
			this->Label_T1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button_main1
			// 
			this->button_main1->Location = System::Drawing::Point(12, 35);
			this->button_main1->Name = L"button_main1";
			this->button_main1->Size = System::Drawing::Size(67, 23);
			this->button_main1->TabIndex = 1;
			this->button_main1->Text = L"KNOPKA";
			this->button_main1->UseVisualStyleBackColor = true;
			this->button_main1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(391, 236);
			this->Controls->Add(this->button_main1);
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
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Label_T1->Text = "Some new";
	}
	};
}
