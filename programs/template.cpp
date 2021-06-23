#include<iostream>
#include<conio.h>
using namespace std;
template <class X>
X Max(X a,X b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int n;
    float m;
    n=Max(10,50);
    cout<<"MAXIMUM OF TWO INTEGERS:"<<n<<endl;
    m=Max(4.5,6.9);
    cout<<"MAXIMUM OF TWO FLOATING:"<<m<<endl;
    getch();
    return 0;
}
