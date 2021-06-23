#include<iostream>
#include<conio.h>
using namespace std;
class A
{
  private:
      int a;
  public:
    void input()
    {
        cout<<"ENTER VLAUE OF a:";
        cin>>a;
    }
    void output()
    {
        cout<<"VALUE OF a="<<a<<endl;
    }
};
class B:public A
{
private:
    int b;
public:
    void input()
    {
         A::input();
        cout<<"ENTER VALUE OF b:";
        cin>>b;
    }
    void output()
    {
        A::output();
     cout<<"VALUE OF b:"<<b<<endl;
    }
};
class C:public B
{
private:
    int c;
public:
    void input()
    {
        B::input();
        cout<<"ENTER VALUE OF c:";
        cin>>c;
    }
    void output()
    {
        B::output();
     cout<<"VALUE OF c:"<<c;
    }
};
int main()
{
    C obj;
    obj.input();
    obj.output();
    getch();
    return 0;
}
