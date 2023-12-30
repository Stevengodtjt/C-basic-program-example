#include<iostream>
using namespace std;
int max(int a,int b)
{ if(a>b) return a;
  else    return b;
}
 int main()
 {  int x,y,z;
    cout<<"在屏幕上输入x、y:";
	cin>>x>>y;
	z=max(x,y); 
	cout<<"a,b最大值为:"<<z;
	return 0; 
 }
