#include <iostream>
#include <conio.h>
using namespace std;
class item
{
private:
    int a,b;
public:
    void getx(int x)
    {
        a=x;
    }
    void gety(int y)
    {
        b=y;
    }
    void showdata()
    {
        cout<<"a="<<a;
        cout<<"  b="<<b;
    }
};
class product
{
private:
    int m,n;
public:
    void setdata(int x,int y)
    {
        m=x;
        n=y;
    }
    operator item()//casting operator:
    {
        item temp;
        temp.getx(m);
        temp.gety(n);
        return(temp);
    }
};
int main()
{
    item i1;
    product p1;
    p1.setdata(34,89);
    i1=p1;
    i1.showdata();
    getch();
    return 0;
}
