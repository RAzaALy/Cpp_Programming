#include<iostream>
#include<conio.h>
using namespace std;
class A{
  int a;
  public:
  void fun(){cout<<"parent class:\n";}
  virtual ~A(){cout<<"destructor of parent class:";}
};
class B:public A{
  int b;
  public:
  void f1(){cout<<"child class:";}
  ~B(){cout<<"destrucotr of child class:\n";}
};
void f1();
void  f1(){
    // parent pointer can point to the child object;
    A *p=new B;
    p->fun();//correct
    // p->f1();error
    delete p;
}
int main()
{
   f1();
   getch();
   return 0;
}