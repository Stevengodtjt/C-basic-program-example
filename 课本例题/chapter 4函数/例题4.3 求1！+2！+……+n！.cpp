#include<iostream>
using namespace std;
float fact(int m)              //定义一个fact函数用于求n！ 
{   float product=1;
    if(m<0) return -1;
    else if(m==0) return 1;
    while(m>=1)
    {  product=product*m;
       m--;
    }
    return product;
}
int main()
{  int i,n;
      float s=0;
      cout<<"请输入一个正整数:";
	  cin>>n;
	  for(i=1;i<=n;i++)
	  {  s=s+fact(i);
	  } 
	  cout<<"s="<<s<<'\n';
	  return 0;
}
