#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string>
#include<string.h>
using namespace std;
int main()
{
  string s1="hello";
  int i=s1.size();
  cout<<i;
    char str[20];
    strcpy(str,s1.c_str());
    cout<<str;


}
/*  string s1("hello");
   char str[]="Student";
   string s2;
   s2=s1+str;
   cout<<s2;
   assign()function usage::
    string s1;
    s1.assign("hello");
    cout<<s1;
    append()function usage::
      string s1("hello");
    s1.append(" student");
    insert() function usage::
    cout<<s1;
    string s1("raza");
    s1.insert(2,"jutt");
    cout<<s1;
    replace function::
      string s1("hello");
   s1.replace(0,1,"H");//index is 2:length is:1
   cout<<s1;
  function erase::
     string s1("hello");
   s1.erase();
   cout<<s1;
   FUNCTION COMPARE::
     string s1("ALI RAZA");
  string s2("ALI RAZA");
  int i=s1.compare(s2);
  cout<<i;
  convert into char[]:
      string s1("HELLO");
    char str[20];
    strcpy(str,s1.c_str());
    cout<<str;
   */
