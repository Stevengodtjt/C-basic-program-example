#include<iostream>
using namespace std;
int area(int length=4,int width=2)
{ return length*width;}
int main()
{ int a=8,b=6;
 cout << area(a,b)<< endl; //A 相当于调用area(8,6)
 cout<<area(a)<<endl; //B 相当于调用area(8,2)
 cout<<area()<<endl; //C 相当于调用area(4,2)
 return 0;
}
