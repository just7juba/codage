
#include "MyForm.h"
#include<Windows.h>

using namespace Project7;
using namespace System::Windows::Forms;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    Application::Run(gcnew MyForm());

    return 0;
}