#include<iostream>
#include<tuple>
#include<conio.h>
using namespace std;
int main()
{
    // we can comparision b/w two tuple:
    tuple<string,string,int,int>t1;
    t1=make_tuple("ALI RAZA","Bahadar Ali",18,884);
    cout<<"NAME:"<<get<0>(t1)<<endl;
    cout<<"Father Name:"<<get<1>(t1)<<endl;
    cout<<"AGE:"<<get<2>(t1)<<endl;
    cout<<"MARKS:"<<get<3>(t1)<<endl;
    getch();
    return 0;
}
