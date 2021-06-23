#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    void set_data(int x,int y)
    {
        a=x;
        b=y;
    }
    void show_data()
    {
        cout<<"\na="<<a<<"\nb="<<b<<endl;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);
    }
};

int main()
{
    Complex c1,c2,c3;
    c1.set_data(9,9);
    c2.set_data(3,7);
    c3=c1.add(c2);
    c3.show_data();
    getch();
    return 0;
}
