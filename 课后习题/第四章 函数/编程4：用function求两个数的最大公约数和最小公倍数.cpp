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
 cout << "����Ļ������i,j:";
 cin>>i>>j;
 k=fun(i,j);
 cout<< "i,j���Լ��Ϊ:"<<k<<'\n';
 m=(i*j)/k;                                 //�������ĳ˻�=���Լ��*��С������ 
 cout << "i,j����С������Ϊ:"<<m;
 return 0;
}
