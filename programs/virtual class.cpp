#include<iostream>
#include<conio.h>
using namespace std;
class parent
{
protected:
    int n;
};
class child1:virtual public parent
{

};
class child2:virtual public parent
{

};
class baby:public child1,public child2
{
public:
    void show()
    {
        n=10;
        cout<<"n="<<n;
    }
};
int main()
{
    baby obj;
    obj.show();
    getch();
    return 0;
}
