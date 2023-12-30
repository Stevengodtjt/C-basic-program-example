#include<iostream>
using namespace std;
const int N=7;
int main()
{ double a[N]={2.6,7.3,4.2,5.4,6.2,3.8,1.4},max;   //数组初始化
  int i;
  max=a[0];
  for(i=1;i<N;i++)
  { if(a[i]>max)  
    max=a[i];               //将两个数中较大的数取出 
  } 
  cout<<"最大值="<<max<<endl;
  return 0; 
}
