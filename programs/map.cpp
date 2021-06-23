#include<iostream>
#include<conio.h>
#include<map>
using namespace std;
int main()
{
    map <int,string> customer;
    customer[100]="ALI";
    customer[123]="RAZA";
    customer[145]="JUTT";
    customer[171]="HAIDER";
    customer[200]="ASAD";
    customer.insert(pair<int,string>(204,"BAHADAR ALI JUTT"));
    map <int,string>::iterator p=customer.begin();
          while(p!=customer.end())
    {
        cout<<p->second<<endl;
        p++;
    }

}
/*
  map <int,string> c{{100,"ALI"},{123,"RAZA"},{145,"JUTT"},{171,"HAIDER"},{200,"ASAD"}};

    cout<<c[100]<<endl;
    cout<<c[123]<<endl;
    cout<<c[200];


    map <int,string>::iterator p=customer.begin();
        while(p!=customer.end())
    {
        cout<<p->second<<endl;
        p++;
    }
    cout<<customer.at(100);


    cout<<customer.empty();
    cout<<customer.size();
    cout<<customer.clear();
    */
