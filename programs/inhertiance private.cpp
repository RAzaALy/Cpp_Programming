#include<iostream>
#include<conio.h>
using namespace std;
class parent
{
private:
    int c;
public:
    int b;
protected:
    int a;
};
//public and protected members of parent class are private of child class:
class child:private parent
{
    public:
   void input()
   {
       cout<<"ENTER VALUE OF A:";
       cin>>a;
       cout<<"\nENTER VALUE OF B:";
       cin>>b;
   }
   void output()
   {
       cout<<"VALUE OF A="<<a<<"VALUE OF B="<<b;
   }
};
int main()
{
  child c;
  c.input();
  c.output();
  getch();
  return 0;
}
