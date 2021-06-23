#include <conio.h>
#include <iostream>
using namespace std;
void create();
void create(int s)
{
	int *x=new int[s];
	cout<<"BLOCKS CREATED:"<<s<<endl;\
	//delete is a keyword to release memory of block to which it points:
	delete x;

}
int main()
{
    int a;
	cout<<"ENTER CREATED VALUES:";
	cin>>a;
  create(a);
  getch();
  return 0;



}
