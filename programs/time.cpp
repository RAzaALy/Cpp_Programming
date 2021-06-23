#include<iostream>
#include<conio.h>
using namespace std;
class TIME
{
 int Hr,Min,Sec;
public:
	void set_time(int x,int y,int z){
		Hr=x;
		Min=y;
		Sec=z;
	}
	void show_time()
	{
		cout<<Hr<<":"<<Min<<":"<<Sec<<endl;
	}
	void normalize(){
		Min=Min+Sec/60;
        Sec=Sec%60;
        Hr=Hr+Min/60;
        Min=Min%60;
	}
};
int main()
{
	cout<<"HR:MIN:SEC"<<endl;
	TIME t1;
	int a,s,d;
	cout<<"ENTER TIME IN H:M:S FORMAT"<<endl; 
	cin>>a>>s>>d;
	t1.set_time(a,s,d);
	t1.show_time();
	t1.normalize();
	t1.show_time();
	getch();
	return 0;
}