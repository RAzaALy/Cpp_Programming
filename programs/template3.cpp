#include<iostream>
#include<conio.h>
using namespace std;
template <class X>
X findmin(X arr[],int n)
{
    int i;
    X mini;
    mini=arr[0];
    for(i=0;i<n;i++)
    {
        if(mini>arr[i])
            mini=arr[i];
    }
    return (mini);
}
int main()
{
    int iarr[]={5,4,3,2,1};
    char carr[]={'z','x','e','j','w'};
    double darr[]={3.4,5.2,54.2,9.2,33.9};
    cout<<"GENERIC FUNCTION TO FIND MINIMUM VALUE FROM ARRAY:"<<endl;
    cout<<"INTEGER MINIUM IS:"<<findmin(iarr,5)<<endl;
    cout<<"CHARACTER MINIUM IS:"<<findmin(carr,5)<<endl;
    cout<<"DOUBLE MINIUM IS:"<<findmin(darr,5)<<endl;
    getch();
    return 0;
}
