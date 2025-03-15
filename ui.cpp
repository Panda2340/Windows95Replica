#include "ui.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Windows95Replica::ui frm;
	Application::Run(% frm);
}

//Note: The UI is not interactive.
//Software Version: v1.1