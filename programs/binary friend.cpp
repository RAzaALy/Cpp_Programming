#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
    }
    friend Complex operator+(Complex,Complex);
};
Complex operator+(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return(temp);
}
int main()
{
    Complex c1,c2,c3;
    c1.setdata(5,9);
    c1.showdata();
    c2.setdata(8,3);
    c2.showdata();
    c3=c1+c2;//+operator(c1,c2);
    c3.showdata();
    getch();
}
