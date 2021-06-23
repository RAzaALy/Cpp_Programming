#include<iostream>
#include<conio.h>
#include<array>
using namespace std;
int main()
{
    array <int,5> obj1={11,22,33,44,55};
    cout<<"size of array is "<<obj1.size()<<endl;
    cout<<"front: "<<obj1.front()<<endl;
    cout<<"Back: "<<obj1.back()<<endl;
   // obj1.fill(23);
    //for(int i=0;i<=4;i++)
      //  cout<<" "<<obj1.at(i);
    array <int,5> obj2={1,2,3,4,5};
    obj1.swap(obj2);
    for(int i=0;i<=4;i++)
        cout<<obj1[i]<<" ";
        cout<<endl;
         for(int i=0;i<=4;i++)
        cout<<obj2[i]<<" ";
        getch();

}
