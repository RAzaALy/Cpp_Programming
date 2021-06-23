#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("FH ofstream.txt", ios::app | ios::binary);
	char ch;
	ch = fin.get();
	while (!fin.eof())
	{
		cout << ch;
		ch = fin.get();
	}
	fin.close();
	getch();
	return 0;
}