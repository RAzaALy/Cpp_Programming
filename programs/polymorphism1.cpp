#include<iostream>
#include<conio.h>
using namespace std;
class Test
{
private:
    int n;
public:
    void input()
    {
        cout<<"ENTER A NUMBER:";
        cin>>n;
    }
    void output()
    {
        cout<<"THE NUMBER IS:"<<n;
    }
};
int main()
{
    Test *ptr;
    ptr=new Test;
    ptr->input();
    ptr->output();
    getch();
    return 0;
}
