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
        cout<<"a="<<a<<"\nb="<<b;

    }
    Complex operator-(Complex c)
    {
        Complex temp;
        temp.a=a-c.a;
        temp.b=b-c.b;
        return(temp);
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.setdata(5,3);
    c2.setdata(9,4);
    c3=c1-c2;
    c3.showdata();
    getch();
}
