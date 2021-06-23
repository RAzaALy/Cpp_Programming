#include<iostream>
#include<conio.h>
//In constructor inheritance call from child to parent and excuation form parent to child:
//In destructor inheritance call from child to parent and excuation form child to parent:
using namespace std;
class A
{
private:
    int a;
public:
    A(int k)
    {
        a=k;
        cout<<"a="<<a;
    }
    ~A(){}
};
class B:public A
{
private:
    int b;
public:
    B(int x,int y):A(y)
    {
        b=x;
        cout<<"  b="<<b;
    }
    ~B(){}
};
int main()
{
    B obj(2,5);
    getch();
}
