#include "LoginForm.h"
#include <Windows.h>
#include <sqlite3.h>
using namespace BankManagementSystem;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew LoginForm());
	return 0;
}
