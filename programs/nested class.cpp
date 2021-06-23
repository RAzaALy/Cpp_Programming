#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
using namespace std;
class student
{
private:
  int rollno;
  char name[30];
  class adress
  {
  private:
    int houseno;
    char street[30];
    char city[30];
    char state[30];
    char country[30];

  public:
    void setaddress()
    {
      cout << "ENTER YOUR HOUSE NO:";
      cin >> houseno;
      cout << "ENTER YOUR STREET&CITY&STATE&COUNTRY:" << endl;
      fflush(stdin);
      gets(street);
      gets(city);
      gets(state);
      gets(country);
    }
    void showaddress()
    {
      cout << "\nADRESS:\n";
      cout << "House No:"<<houseno<<" "<<" Street:"<<street<<" City:"<<city<<" State:"<<state<<" Country:"<<country<<endl;
    }
  };
  adress add;

public:
  void setrollno()
  {
    cout << "ENTER YOUR ROLL NO:";
    cin >> rollno;
  }
  void setname()
  {
    cout << "ENTER YOUR NAME:";
    fflush(stdin);
    gets(name);
  }
  void setaddress()
  {
    add.setaddress();
  }
  void showstudent()
  {
    cout << "STUDENT DATA:" << endl;
    cout << "ROLL NO:" << rollno << endl;
    cout << "NAME:" << name << endl;
    add.showaddress();
  }
};
int main()
{
  student s1;
  s1.setrollno();
  s1.setname();
  s1.setaddress();
  s1.showstudent();
  getch();
  return 0;
}