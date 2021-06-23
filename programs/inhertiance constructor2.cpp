#include<iostream>
#include<conio.h>
using namespace std;
class A
{
private:
    int a;
public:
    A()
    {a=0;}
    A(int n)
    {
      a=n;
    }
    void show()
    {
        cout<<"a="<<a<<endl;
    }
};
class B
{
private:
    int b;
    public:
   B()
   {b=0;}
   B(int m)
   {
       b=m;
   }
   void show()
   {
       cout<<"b="<<b<<endl;
   }
};
class C:public A,public B
{
private:
    int c;
public:
   C():B(),A()
   {c=0;}
   C(int k,int j,int l):A(k),B(j)
   {
       c=l;
   }
   void show()
   {
      A::show();
      B::show();
       cout<<"c="<<c;
   }
};
int main()
{
    C obj(45,34,56);
    obj.show();
    getch();
    return 0;
}
