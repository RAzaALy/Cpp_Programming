#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
private:
	int a,b;
public:
   	void setData(int x,int y){
		a=x;
		b=y;
	}
	void showData(){
		cout<<"\na="<<a<<" b="<<b;
	}
	friend ostream& operator<<(ostream&,Complex);
	friend istream& operator>>(istream&,Complex&);
};
ostream& operator<<(ostream &dout,Complex X)
{
	cout<<"a="<<X.a<<"  b="<<X.b;
	return(dout);
}
istream& operator>>(istream &din,Complex &Y)
{
	cin>>Y.a>>Y.b;
	return (din);
}
int main()
{
	Complex c1;
	cout<<"\nENTER A Complex NUMBER:";
	cin>>c1;//operator<<(cin,c1);
	cout<<"\nYOU ENTERED:"<<endl<<c1;//operator<<(cout,c1);
	getch();
	return 0;
}
