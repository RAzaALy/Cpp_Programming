#include<iostream>
#include<conio.h>
using namespace std;
class parent
{
public:
    virtual void show()
    {
        cout<<"Class Parent..."<<endl;
    }
};
class child1:public parent
{
public:
    void show()
    {
        cout<<"Class child1..."<<endl;
    }
};
class child2:public parent
{
public:
    void show()
    {
        cout<<"Class child2..."<<endl;
    }
};
int main()
{
   parent *ptr[5];
   int op,i;
   cout<<"ENTER 1 FOR PARENT,2 FOR CHILD1 AND 3 FOR CHILD2:";
   for(i=0;i<5;i++){
    cin>>op;
   if(op==1)
    ptr[i]=new parent;
   else if(op==2)
    ptr[i]=new child1;
   else
    ptr[i]=new child2;
   }
   for(i=0;i<5;i++)
    ptr[i]->show();
    getch();
    return 0;
}

