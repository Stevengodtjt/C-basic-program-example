#include<iostream>
using namespace std;
int max(int a,int b)
{ if(a>b) return a;
  else    return b;
}
 int main()
 {  int x,y,z;
    cout<<"����Ļ������x��y:";
	cin>>x>>y;
	z=max(x,y); 
	cout<<"a,b���ֵΪ:"<<z;
	return 0; 
 }
