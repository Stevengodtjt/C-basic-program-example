#include<iostream>
using namespace std;
int pow(int m ,int k)
{   int p=1;
    for(int i=1;i<=k;i++)
    { p=p*m;}
    return p;
}
 int sum(int n,int k)
{ int i,s=0;
  for(i=1;i<=n;i++)
  { s=s+pow(i,k);
  }
  return s;
}
  
  int main()
  {  int n,k;
     cout<<"请输入n和k的值:";
	 cin>>n>>k;
	 cout<<"1^k+2^k+3^k+……+"<<n<<"^k="<<sum(n,k)<<endl;
	 return 0; 
  }
