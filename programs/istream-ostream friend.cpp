#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
private:
    int a,b;
public:


    friend ostream& operator<<(ostream&,Complex);
    friend istream& operator>>(istream&,Complex&);

};
ostream& operator<<(ostream& dout,Complex C)
{
    cout<<"a="<<C.a<<endl<<"b="<<C.b;
    return(dout);
}
istream& operator>>(istream& din,Complex &C)
{
    cin>>C.a>>C.b;
    return(din);
}
int main()
{
    Complex c1;
    cout<<"Enter a Complex number:";
    cin>>c1; //operator>>(cin,c1);
    cout<<"You entered:";
    cout<<c1;//operator>>(cout,c1);
}
