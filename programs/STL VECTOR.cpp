#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
    cout << "current capacity is:" << v1.capacity() << endl;
    for (int i = 0; i <= 9; i++)
        v1.push_back(10 * (i + 1));
    cout << "current capacity is:" << v1.capacity() << endl;
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << "\n\n";
   // v1.clear();
    //cout<<"current capacity is:"<<v1.capacity()<<endl;
    //cout << "Total size is:" << v1.size() << endl;
    //cout << "VALUE AT 4 INDEX IS:" << v1.at(4)<< endl;
    vector<int>::iterator it = v1.begin();
    v1.insert(it + 3, 35);
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << "\nFIRST VALUE IS:" << v1.front() << endl;
    cout << "LAST VALUE IS:" << v1.back();
    getch();
    return 0;
}
/*vector <char>v1{'A','B','C','D','E'};
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
*/
/*vector <int>v1{2,3,4,5,1};
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
*/
/*vector <string>v1{"hello"};
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
*/
/*vector <int>v1;
    cout<<"current capacity is "<<v1.capacity();
    v1.push_back(13);
    cout<<"\ncurrent capacity is "<<v1.capacity();
    v1.push_back(14);
    cout<<"\ncurrent capacity is "<<v1.capacity();
    v1.push_back(15);
    cout<<"\ncurrent capacity is "<<v1.capacity();
   /*
    /*vector <int>v1;
    cout<<"current capacity is:"<<v1.capacity()<<endl;
    for(int i=0;i<=9;i++)
    v1.push_back(10*(i+1));
    cout<<"current capacity is:"<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"\n\n AFTER POP:"<<endl;
    cout<<"current capacity is:"<<v1.capacity()<<endl;
    v1.pop_back();
    cout<<"current capacity is:"<<v1.capacity()<<endl;
    v1.pop_back();//don't reduce capacity;
    cout<<"current capacity is:"<<v1.capacity()<<endl;
    cout<<"TOTAL NUMBER OF ELEMENTS ARE:"<<v1.size()<<endl;
*/
