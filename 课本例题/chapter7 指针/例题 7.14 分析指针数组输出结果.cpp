#include<iostream>
using namespace std;
int main()
{   int a[12]={1,2,3,4,5,6,7,8,9,10,11,12};
    int *p[4],i;
    for(i=0;i<4;i++)
     p[i]=&a[i*3];   //把变量地址赋给指针数组
	 cout<<p[3][2];
	 return 0; 
}

