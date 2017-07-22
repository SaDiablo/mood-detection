#include <iostream>
using namespace std;

//#include <opencv2/core.hpp>
//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//using namespace cv;

//function list (identifiers)
void menu();
void menu_1();
void menu_2();
void menu_3();

//global vars
char zmienna;

int main(int argc, char** argv)
{
	menu();
	return 0;
}

void menu()
{
	cout << "1. Start detection" << endl;
	cout << "2. Options" << endl;
	cout << "3. Help" << endl;
	cout << "" << endl;
	cout << "0. Exit" << endl;

	int liczba;
	cin >> liczba;

	switch (liczba)
	{
	case 1:
		menu_1();
		break;
	case 2:
		menu_2();
		break;
	case 3:
		menu_3();
		break;
	case 0:
		return;
		break;
	}
}

void menu_1() //Start
{
	cout << "Start detection" << endl;
	cin >> zmienna;
	return;
}

void menu_2() //Options
{
	cout << "Options" << endl;
	cin >> zmienna;
	return;
}

void menu_3() //Help
{
	cout << "Help" << endl;
	cin >> zmienna;
	return;
}