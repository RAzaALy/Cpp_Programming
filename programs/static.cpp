#include <iostream>
#include <conio.h>
using namespace std;
class yahoo
{
private:
	static int n;
   public:
   	yahoo()
   	{
   		n++;
   	}
   	void show()
   	{
   		cout<<"YOU HAVE CREATED "<<n<<" OBJECTS SO FAR."<<endl;

   	}
};
int yahoo::n=0;//static varabiles initalize to zero:
int main()
{
	yahoo obj1,obj2;
	obj2.show();
	yahoo obj3;
	obj3.show();
	getch();
	return 0;
}