#include<iostream>
#include<conio.h>
using namespace std;
class A
{
private:
    int a;
public:
    void input(int x)
    {
        a=x;
    }
    void output()
    {
        cout<<"THE VALUE OF a="<<a<<endl;
    }
};
class B:public A
{
private:
    int b;
public:
    void input(int m,int n)
    {
        A::input(m);
        b=n;
    }
    void output()
    {
        A::output();
        cout<<"THE VALUE OF b="<<b<<endl;
    }
};
class C:public B
{
private:
    int c;
public:
    void input(int j,int k,int l)
    {
        B::input(j,k);
        c=l;
    }
    void output()
    {
        B::output();
        cout<<"THE VALUE OF c="<<c<<endl;
    }
};
int main()
{
    C obj;
    obj.input(1,2,3);
    obj.output();
    getch();
    return 0;
}
