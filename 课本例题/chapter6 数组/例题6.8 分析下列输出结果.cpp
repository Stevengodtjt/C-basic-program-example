#include<iostream>
using namespace std;
void fun(int a[2])
{  for(int i=0;i<2;i++)
     a[i]=a[i]*a[i];
}
int main()
{   int b[2]={2,4};
    cout<<b[0]<<'\t'<<b[1]<<endl;
    fun(b);
    cout<<b[0]<<'\t'<<b[1]<<endl;
    return 0;
}
