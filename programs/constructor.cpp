#include <iostream>
#include <conio.h>
using namespace std;
class Complex
{
private:
	int a,b;
public:
	Complex(int x,int y){   //parametrized constructor:
	a=x;
	b=y;
	}
	Complex(int k){//parametrized constructor:
		a=k;
	}

   Complex(){ }//default constructor:
   Complex(Complex &c){//copy constructor:
   	a=c.a;
   	b=c.b;
   }
};
//when there is no constructor in class than compiler make two type of cnstructor
//one is default constructor 2nd is copy constructor
//when object is made constructor is always call automatically by compiler:
int main()
{
	Complex c(4,5),c1(8),c2();
	Complex c4(c);
	getch();
	return 0;
}