#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class TV
{
 private:
 	char brandname[20];
 	char model[20];
 	float Retailprice;
 public:
 	TV();
 	void change();
 	void display();
};
TV ::TV()
{
   cout<<"DISPLAYING THE OBJECT...\n\n\n"<<endl;
   cout<<"ENTER BRAND NAME OF TELEVISION:";
   cin>>brandname;
   cout<<"ENTER MODEL OF TELEVISION:";
   cin>>model;
   cout<<"ENTER RETAIL PRICE OF TELEVISION:";
   cin>>Retailprice;
}
void TV::change()
{
   cout<<"CHANGE THE TELEVISION RECORD...\n\n\n"<<endl;
   cout<<"ENTER BRAND NAME OF TELEVISION:";
   cin>>brandname;
   cout<<"ENTER MODEL OF TELEVISION:";
   cin>>model;
   cout<<"ENTER RETAIL PRICE OF TELEVISION:";
   cin>>Retailprice;

}
 
void TV::display()
{
	cout<<"\n\n\n\n";
	cout<<"BRAND NAME:"<<brandname<<endl;
	cout<<"MODEL:"<<model<<endl;
	cout<<"PRICE:"<<Retailprice<<endl;
}
int main()
{
	TV obj;
	obj.display();
	obj.change();
	obj.display();
	getch();
	return 0;
}