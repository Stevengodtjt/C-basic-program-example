#include<iostream>
using namespace std;
int area(int length=4,int width=2)
{ return length*width;}
int main()
{ int a=8,b=6;
 cout << area(a,b)<< endl; //A �൱�ڵ���area(8,6)
 cout<<area(a)<<endl; //B �൱�ڵ���area(8,2)
 cout<<area()<<endl; //C �൱�ڵ���area(4,2)
 return 0;
}
