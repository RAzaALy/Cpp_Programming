#include<iostream>
#include<conio.h>
using namespace std;
class A
{
public:
    virtual void fun()=0;
    //A do nothing function is called pure virtual function:
    //A class containing pure virtual function is called abstract class:
    //A abstract class has no object:
};
class B:public A
{
public:
    void fun()
    {
      cout<<"Function of child class:";
    }
    //An abstract class must have a child class and overriding of virtual fun:
};
int main()
{
    B obj;
    obj.fun();
    getch();
}
