#include<iostream>
#include <fstream>
#include <conio.h>
using namespace std;
int main()
{
	fstream fio,fou;
	fio.open("FH ofstream.txt");
    char ch;
    ch=fio.get();
    while(!fio.eof())
    {
    	cout<<ch;
    	ch=fio.get();
    }
    fio.close();
    fou.open("FH ofstream.txt",ios::app|ios::binary);
    fou<<"\nC++ PROGRAMMING:\nSOFTWARE DEVELOPMENT";
	fou.close();
	getch();
	return 0;
}