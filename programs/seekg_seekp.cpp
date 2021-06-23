#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{    ofstream fout;
    fout.open("tell.txt",ios::ate|ios::app);
    cout<<fout.tellp();
    fout.seekp(5,ios_base::beg);
    cout<<fout.tellp();


    fout.close();
    getch();
    return 0;
}
/*int main()
{
    ifstream fin;
    fin.open("tell.txt");
    cout<<fin.tellg();
    cout<<"\n"<<(char)fin.get();
    cout<<(char)fin.get();
    cout<<"\n"<<fin.tellg();
    fin.seekg(6);
    cout<<"\n"<<(char)fin.get();
    cout<<"\n"<<fin.tellg();
    cout<<"\n"<<fin.tellg();
    fin.seekg(-2,ios_base::end);
    cout<<"\n"<<fin.tellg();
   cout<<"\n"<<(char)fin.get();
    getch();
    return 0;
}
*/
