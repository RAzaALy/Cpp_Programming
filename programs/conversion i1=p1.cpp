//class type to class type through casting operator:
#include<iostream>
#include<conio.h>
using namespace std;
class Item
{
private:
    int a,b;
public:
    void seta(int x)
    {
        a=x;
    }
    void setb(int y)
    {
        b=y;
    }
    void showdata()
    {
        cout<<"a="<<a<<"\nb="<<b;
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
    operator Item()//casting operator:
    {
        Item temp;
        temp.seta(m);
        temp.setb(n);
        return(temp);
    }
};
int main()
{
    product p;
    Item i;
    p.setdata(34,96);
    i=p;//constructor making in left side of assignment and casting operator in right side:
    i.showdata();
    getch();
    return 0;
}

//class type to class type through constructor:
// #include <iostream>
// #include <conio.h>
// using namespace std;
// class product
// {
// 	int m,n;
// public:
// 	void setdata(int x,int y)
// 	{
// 		m=x;
// 		n=y;
// 	}
// 	int getM()
// 	{return(m);}
// 	int getN()
// 	{return(n);}
// };
// class item
// {
// 	int a,b;
// public:
// 	item()//default constructor:
// 	{}
// 	item(product p)
// 	{
//        a=p.getM();
//        b=p.getN();
// 	}
// 	void showdata()
// 	{
// 		cout<<"a="<<a<<"  b="<<b;
// 	}
// };
// int main()
// {
// 	item i1;
// 	product p1;
// 	p1.setdata(5,8);
// 	i1=p1;//i1.operator(product p)
// 	i1.showdata();
// 	getch();
// 	return 0;
// }
