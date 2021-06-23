#include<iostream>
#include<conio.h>
using namespace std;
class A
{
public:
    A()
    {
    cout<<"CONSTRUCTOR OF CLASS A:"<<endl;
    }
};
class B
{
    public:
   B()
   {
       cout<<"CONSTRUCTOR OF CLASS B:"<<endl;
   }
};
class C:public A,public B
{
public:
   C()
   {
       cout<<"CONSTRUCTOR OF CLASS C:";
   }
};
int main()
{
    C obj;
    getch();
    return 0;
}
