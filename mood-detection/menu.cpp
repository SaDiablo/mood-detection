#include "menu.h"
#include "detection.h"


using namespace std;

char zmienna = '0';

void wys_menu()
{
	cout << "1. Start detection" << endl;
	cout << "2. Options" << endl;
	cout << "3. Help" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "0. Exit" << endl;
	cout << "" << endl;
	cout << "--------------------------------------------" << endl;
	cout << "" << endl;
}

void wys_menu_1()
{
	cout << "Start detection" << endl;
	cout << "Press any key to stop..." << endl;
}

void wys_menu_2()
{
	cout << "Options" << endl;
	cout << "1. Options" << endl;
	cout << "2. Options" << endl;
	cout << "3. Options" << endl;
	cout << "" << endl;
	cout << "0. Back" << endl;
	cout << "" << endl;
	cout << "--------------------------------------------" << endl;
	cout << "" << endl;
}

void wys_menu_3()
{
	cout << "Help" << endl;
	cout << "cos" << endl;
	cout << "cos" << endl;
	cout << "cos" << endl;
	cout << "" << endl;
	cout << "0. Back" << endl;
	cout << "" << endl;
	cout << "--------------------------------------------" << endl;
	cout << "" << endl;
}

void menu()
{
	switch (zmienna = _getch())
	{
	case '1':
		cls();
		wys_menu();
		wys_menu_1();
		menu_1();
		break;
	case '2':
		cls();
		wys_menu();
		wys_menu_2();
		menu_2();
		break;
	case '3':
		cls();
		wys_menu();
		wys_menu_3();
		menu_3();
		break;
	case '0':
		return;
		break;
	default:
		menu();
		break;
	}
}

void menu_1() //Detection
{
	thread logic (logic);
	logic.join();
	
	cout << "Stop detection" << endl;
	cout << "" << endl;
	menu();
}

void menu_2() //Options
{
	switch (zmienna = _getch())
	{
	case '1':
		cls();
		wys_menu();
		wys_menu_2();
		cout << "Wybrales opcje 1" << endl;
		menu_2();
		break;
	case '2':
		cls();
		wys_menu();
		wys_menu_2();
		cout << "Wybrales opcje 2" << endl;
		menu_2();
		break;
	case '3':
		cls();
		wys_menu();
		wys_menu_2();
		cout << "Wybrales opcje 3" << endl;
		menu_2();
		break;
	case '0':
		cls();
		wys_menu();
		menu();
		break;
	default:
		menu_2();
		break;
	}
}

void menu_3() //Help
{
	switch (zmienna = _getch())
	{
	case '0':
		cls();
		wys_menu();
		menu();
		break;
	default:
		menu_3();
		break;
	}
}