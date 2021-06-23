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
	TIME operator+(TIME t)
	{
		TIME temp;
		temp.Hr=Hr+t.Hr;
		temp.Min=Min+t.Min;
		temp.Sec=Sec+t.Sec;
		temp.normalize();
		return(temp);
	}
};
int main()
{
	cout<<"HR:MIN:SEC"<<endl;
	TIME t1,t2,t3;
	t1.set_time(4,35,26);
	t2.set_time(3,50,45);
	t1.show_time();
	t2.show_time();
	t3=t1+t2;//t1.operator+(t2);
	t3.show_time();
	getch();
	return 0;
}