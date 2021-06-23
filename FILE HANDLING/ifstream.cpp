#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("input.txt");
    char c;
    c=fin.get();
    while (!fin.eof())
    {
        cout<<c;
        c=fin.get();
    }
    fin.close();
    getch();
    return 0;
    
}