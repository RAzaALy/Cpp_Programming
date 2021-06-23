#include<iostream>
#include <fstream>
#include <conio.h>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("FH ofstream.txt",ios::app|ios::binary);//binary means \n not works in file:
	fout<<"HELLO WORLD\nALI RAZA JUTT\n";
	fout.close();
	getch();
	return 0;
}
