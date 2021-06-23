#include<iostream>
#include<conio.h>
using namespace std;
class Integer
{
   int x;
public:
	void set_data(int a){
		x=a;
	}
	void show_data(){
		cout<<"\nx="<<x;
	}
    friend Integer operator++(Integer);
    friend Integer operator++(Integer,int);
};
	  Integer operator ++(Integer a){//preincrement
		Integer i;
		i.x=++a.x;
		return(i);
	}
		Integer operator ++(Integer b,int){//postincrement
		Integer j;
		j.x=b.x++;
		return(j);
	}
int main()
{
	Integer i1,i2;
	i1.set_data(36);
	i1.show_data();
	i2=++i1;//friend function->i2=.operator++(i1);
	i2.show_data();
	i1.set_data(53);
	i1.show_data();
	i2=i1++;//i2=.operator++(i1);
	operator++(i1).show_data();
	getch();
	return 0;
}