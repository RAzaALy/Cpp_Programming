#include<iostream>
#include<conio.h>
using namespace std;
template <class X>
void show(X a)
{
    cout<<a<<endl;
}
int main()
{
    show("hello world");
    show(45);
    show(45.3);
    show("ALI RAZA JUTT 345");
    getch();
    return 0;
}
