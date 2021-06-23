#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    char ch;
    fout.open("tell.txt",ios::app);
    int pos;
    pos=fout.tellp();
    cout<<pos;
    fout<<"ALI RAZA";
     pos=fout.tellp();
    cout<<pos;
    fout.close();
    getch();
    return 0;
}
/*int main()
{
    ifstream fin;
    char ch;
    fin.open("tell.txt");
    int pos;
    pos=fin.tellg();
    cout<<pos;
    fin>>ch;
    pos=fin.tellg();
    cout<<pos;
    getch();
    return 0;
}
*/
