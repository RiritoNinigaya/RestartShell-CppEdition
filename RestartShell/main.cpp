#include <Windows.h>
#include <iostream>
using namespace std;

int main() 
{
	SetConsoleTitleW((LPCWSTR)"RestartShell by RiritoNinigaya");
	system("taskkill /f /im explorer.exe");
	Sleep(3000);
	system("start explorer");
	Sleep(2500);
	exit(1002);
	return 0;
}