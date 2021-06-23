#include <iostream>
#include<conio.h>
using namespace std;
class number
{
private:

	int n;
	char ch;
public:
  number(int a,char b)
  {
     n=a;
     ch=b;
  }
  number()
  {
    n=0;
    ch='A';
  }
  void show()
  {
  	cout<<"NUMBER:"<<n<<endl;
  	cout<<"CHARACTER:"<<ch<<endl;
  }

};
int main()
{
  number n1,n2(235,'H');
  n1.show();
  n2.show();
  getch();
  return 0;
}
