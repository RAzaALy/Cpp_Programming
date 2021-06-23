#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    private:
    int a;
    public:
    void in()
    {
        cout<<"ENTER VALUE OF A:";
        cin>>a;
    }
    void out()
    {
        cout<<"VALUE OF A="<<a<<endl;
    }
};
class B
{
    private:
    int b;
    public:
    void input()
    {
        cout<<"ENTER VALUE OF B:";
        cin>>b;
    }
    void output()
    {
        cout<<"VALUE OF B="<<b<<endl;
    }
};
class C:public A,public B
{
    private:
    int c;
    public:
    void get()
    {
        A::in();
        B::input();
        cout<<"ENTER VALUE OF C:";
        cin>>c;
    }
    void show()
    {
        A::out();
        B::output();
        cout<<"VALUE OF C="<<c;
    }
};
int main()
 {
     C obj;
     obj.get();
     obj.show();
     getch();
     return 0;
 }
