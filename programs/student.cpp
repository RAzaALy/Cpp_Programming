#include<iostream>
#include<conio.h>
using namespace std;
class student
{
private:
	int marks;
	char grade;
public:
	student(int x,char g,int i)
	{
		cout<<"RECORD OF STUDENT:"<<i<<endl;
		cout<<"MARKS:"<<x<<endl;
		cout<<"GRADE:"<<g<<endl;
	}
};
int main()
{
	student s1(450,'B',1),s2(890,'A',2);
	getch();
	return 0;

}