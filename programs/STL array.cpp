#include <iostream>
#include <array>
#include <conio.h>
using namespace std;
int main()
{
    array<int, 5> arr;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a value:";
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << " "<<arr.at(i);
    }
    cout<<"\nFirst value:"<<arr.front()<<endl;
    cout<<"Last Value:"<<arr.back();
    getch();
}