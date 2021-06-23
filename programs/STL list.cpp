#include<iostream>
#include<conio.h>
#include<list>
using namespace std;
int main()
{
    list <int> l1{55,33,98,34,11,43,66,88};
    // iterator is a pointer which points at beginning:
    list <int>::iterator p=l1.begin();
    while(p!=l1.end()){
        cout<<*p<<" ";
        p++;}
        cout<<endl;
    //l1.pop_back();
    //l1.pop_front();
    //l1.sort();
   // l1.reverse();
   //l1.remove(88);
   l1.clear();
        list <int>::iterator q=l1.begin();
    while(q!=l1.end()){
        cout<<*q<<" ";
        q++;}
        cout<<endl;
            list <char> l3{'E','B','C','F','D','A'};
    l3.sort();
    list <char>::iterator j=l3.begin();
    while(j!=l3.end()){
        cout<<*j<<" ";
        j++;}
}
   /* list <int> l1{11,22,33,44,55 };
    list <int>::iterator p=l1.begin();
    while(p!=l1.end()){
        cout<<*p<<" ";
        p++;}*/
/*    list <string> l1{"ALI RAZA","HAIDER ALI","JUTT","LAHORE"};
    list <string>::iterator p=l1.begin();
    while(p!=l1.end()){
        cout<<*p<<endl;
        p++;}*
       /* list <char> l1{'A','B','C','D'};
    list <char>::iterator p=l1.begin();
    while(p!=l1.end()){
        cout<<*p<<endl;
        p++;}*/
/*
    list <char> l1{'E','B','C','D'};
    list <char>::iterator p=l1.begin();
    l1.push_back('Y');
    l1.push_front('Z');
    while(p!=l1.end()){
        cout<<*p<<" ";
        p++;}
    cout<<"\nTOTAL VALUES IN THE LIST:"<<l1.size()<<endl;
    */
