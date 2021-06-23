#include<iostream>
#include<conio.h>
using namespace std;
inline float area(float,float);
inline float area(int);
int main()
{
	float r,l,b;
	cout<<"ENTER RADIUS OF CIRCLE:";
	cin>>r;
	cout<<"\nAREA="<<area(r)<<" sq.unit";
	cout<<"\nENTER LENGTH AND BRIDTH OF RECTANGLE:"<<endl;
	cin>>l>>b;
	cout<<"AREA="<<area(l,b);
	getch();
	return 0;
}
float area(float L,float B)
{
	return(L*B);
}
float area(int R)
{
	return(3.14*R*R);
}