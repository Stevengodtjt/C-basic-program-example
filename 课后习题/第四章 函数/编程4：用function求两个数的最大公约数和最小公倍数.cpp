#include<iostream>
using namespace std;
int fun( int a,int b)
{ int z;
 for(z=a;z>=1;z--)
  { if(a%z==0&&b%z==0) 
 break;
  }
 return z;
}
int main()
{ int i,j,k,m;
 cout << "在屏幕上输入i,j:";
 cin>>i>>j;
 k=fun(i,j);
 cout<< "i,j最大公约数为:"<<k<<'\n';
 m=(i*j)/k;                                 //两个数的乘积=最大公约数*最小公倍数 
 cout << "i,j的最小公倍数为:"<<m;
 return 0;
}
