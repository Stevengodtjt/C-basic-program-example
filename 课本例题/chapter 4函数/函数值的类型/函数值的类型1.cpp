#include<iostream>
using namespace std;
int add(double x,double y)
{return x+y;}
int main()
{   float x,y,z;
    cout<<"����Ļ������x��y:";
	cin>>x>>y;
	z=add(x,y);
	cout<<"x+y="<<z;
	return 0;
}


