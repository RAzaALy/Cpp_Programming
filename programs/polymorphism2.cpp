#include<iostream>
#include<conio.h>
using namespace std;
class Person
{
private:
    char name[30];
public:
    void input()
    {
        cout<<"ENTER YOUR NAME:";
        fflush(stdin);
        gets(name);
    }
    void output()
    {
        cout<<"YOUR NAME:"<<name<<endl;
    }
};
int main()
{
    Person *ptr[5];
    int i;
    for(i=0;i<5;i++){
        ptr[i]=new Person;
        ptr[i]->input();
    }
    cout<<"\n\n\n";
    for(i=0;i<5;i++){
        ptr[i]->output();
    }
    getch();
    return 0;

}
