#include "MyForm.h"
#include "vector"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) 
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	FILEMAN::MyForm form;
	Application::Run(% form);
}
