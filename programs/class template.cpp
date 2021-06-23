#include <iostream>
#include <conio.h>
using namespace std;
template <class X>
class ArrayList
{
private:
    struct ControlBlock
    {
        int capacity;
        X *arr_ptr;
    };
    struct ControlBlock *s;
public:
    ArrayList(int capacity)//constructor:
    {
        s=new ControlBlock;
        s->capacity=capacity;
        s->arr_ptr=new X [s->capacity];//capacity size array is mads:
    }
    void addElement(int index,X data)
    {
        if(index>=0 && index<=s->capacity-1)
            s->arr_ptr[index]=data;
        else
            cout<<"\nARRAY INDEX IS NOT VALID!!!";
    }
    void viewElement(int index,X &data)//&data is REFARANCE VARIABLE
    {
        if(index>=0&&index<=s->capacity-1)
            data=s->arr_ptr[index];
        else
            cout<<"\n ARRAY INDEX IS NOT VALID!!!";
    }
    void viewList()
    {
        int i;
        for(i=0; i<s->capacity; i++)
            cout<<" "<<s->arr_ptr[i];
    }
};
int main()
{
    int data;
    ArrayList <string>list1(4);
    list1.addElement(0,"Ali raza jutt");
    list1.addElement(1,"haider ali jutt");
    list1.addElement(2,"asad jutt");
    list1.addElement(3,"raza jutt007");
    list1.viewList();
    getch();
    return 0;


}
