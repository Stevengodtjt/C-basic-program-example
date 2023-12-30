#include<iostream>
using namespace std;
int main()
{    int i=3,j;
     j=++i;       //前置++，先执行i=i+1,i的值为4，再将i赋给j，j的值也为4
	 cout<<"j="<<j<<'\n';
	 return 0; 
}
