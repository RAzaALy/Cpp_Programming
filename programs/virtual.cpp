#include<iostream>
#include<conio.h>
using namespace std;
class A
{
public:
    virtual void show()
    {
        cout<<"Parent class A:"<<endl;
    }
};
class B:public A
{
public:
    void show()
    {
        cout<<"Child class B:"<<endl;
    }
};
class C:public A
{
public:
    void show()
    {
        cout<<"Child class C:"<<endl;
    }
};
int main()
{
    A *ptr,obj1;
    B obj2;
    C obj3;
    ptr=&obj1;
    ptr->show();//parent class A:
     ptr=&obj2;
    ptr->show();//child class B:
     ptr=&obj3;
    ptr->show();//child class C:
    getch();
    return 0;
}
