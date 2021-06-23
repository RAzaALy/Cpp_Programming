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
	Integer operator --(){//predecrement
		Integer i;
		i.x=--x;
		return(i);
	}
		Integer operator --(int){//postdecrement
		Integer i;
		i.x=x--;
		return(i);
	}

};
int main()
{
	Integer i1,i2;
	i1.set_data(5);
	i1.show_data();
	i2=--i1;
	i2.show_data();
	i1.set_data(8);
	i1.show_data();
	i2=i1--;//i2=i1.operator--();
	i1.show_data();
	getch();
	return 0;
}