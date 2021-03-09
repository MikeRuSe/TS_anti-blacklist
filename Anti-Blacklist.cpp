// Anti-Blacklist.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <string>
#include <fstream>
#ifdef _WIN32
#include <windows.h>
#include <tchar.h>
#include <conio.h>
#include <strsafe.h>
#else
#include <unistd.h>
#endif
#include <cstdlib>
#include <shlobj_core.h>
using namespace std;
void second() {
	system("cls");
	cout << "Made by CERVEZAIM with <3\nExiting.";
	Sleep(900);
	system("cls");
	cout << "Made by CERVEZAIM with <3\nExiting..";
	Sleep(900);
	system("cls");
	cout << "Made by CERVEZAIM with <3\nExiting...";
	Sleep(900);
	system("cls");
	cout << "Made by CERVEZAIM with <3\nExiting....";
	Sleep(100);
}
void license() {
	cout << " Made by https://github.com/MikeRuSe/ \n_____________________________________________________";
	cout << "\n---------------------COPYRIGHT-----------------------\nThis file is part of Anti-BL_v1.02. Which is released\nunder the terms of the GNU Lesser Public License as \npublished by the Free Software Foundation. You should\nhave received a copy of the GNU Lesser Public License\nalong. If not, see http://www.gnu.org/licenses/.";
	cout << "\n-----------------------------------------------------\n";
	cout << "\n > CONSOLE OUTPUT:\n";
}
int main()
{
	TCHAR szOldTitle[MAX_PATH];
	TCHAR szNewTitle[MAX_PATH];

	// Save current console title.

	if (GetConsoleTitle(szOldTitle, MAX_PATH))
	{
		// Build new console title string.

		StringCchPrintf(szNewTitle, MAX_PATH, TEXT("Anti-BL_v1.02"), szOldTitle);

		SetConsoleTitle(szNewTitle);
	}
	ofstream foutput;
	ifstream finput;
	finput.open("C:\\Windows\\System32\\drivers\\etc\\hosts");
	foutput.open("C:\\Windows\\System32\\drivers\\etc\\hosts", ios::app);
	license();
	if (IsUserAnAdmin() == true) {
		if (finput.is_open()) {
			foutput << "\n0.0.0.0 blacklist.teamspeak.com\n0.0.0.0 blacklist2.teamspeak.com";
			finput.close();
			foutput.close();
			cout << "\n >> Now you can access blacklisted servers.";
			Sleep(20000);
			second();
			EXIT_SUCCESS;
			return 0;
		}
		else {
			finput.close();
			foutput.close();
			cout << "\n >> Could not update etc/hosts, are you running as Administrator?";
			Sleep(30000);
			second();
			EXIT_FAILURE;
			return 0;
		}
	}
	else {
		finput.close();
		foutput.close();
		cout << "\n >> Could not update etc/hosts, are you running as Administrator?";
		Sleep(30000);
		second();
		EXIT_FAILURE;
		return 0;
	}
	finput.close();
	foutput.close();
	second();
	Sleep(19000);
	return 0;
}