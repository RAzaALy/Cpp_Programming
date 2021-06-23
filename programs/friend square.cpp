#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
private:
    int a;
public:
    void setdata()
    {
        cout<<"Enter a number:";
        cin>>a;
    }
    void showdata()
    {
        cout<<"a="<<a<<endl;
    }
    friend void square(Complex);
};
    void square(Complex c)
    {
        cout<<"Square of number "<<c.a<<" is = "<<c.a*c.a;

    }
int main()
{
    Complex c1;
    c1.setdata();
    square(c1);
    getch();
}
