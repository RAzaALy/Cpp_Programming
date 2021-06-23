#include<iostream>
#include<conio.h>
using namespace std;
class Integer
{
private:
    int a;
public:
    void setdata(int x)
    {
        a=x;
    }
    void showdata()
{
    cout<<"a="<<a<<endl;
}
  /*  Integer operator ++()//preincrement
    {
        Integer temp;
        temp.a=++a;
        return(temp);
    }*/
    Integer operator ++(int)//postincrement
    {
        Integer temp;
        temp.a=a++;
        return(temp);
    }

};
int main()
{

    Integer i1,i2;
    i1.setdata(4);
    i1.showdata();
  //  i2=++i1;//or i1.operator++();
    i2=i1++;
    i1.showdata();
    i2.showdata();
    getch();
}
