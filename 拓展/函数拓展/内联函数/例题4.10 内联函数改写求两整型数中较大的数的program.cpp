#include<iostream>
using namespace std;
inline int max(int a,int b)
      { return (a>b?a:b);}
int main()
{ int x,y;
  cout<<"����������:\n";
  cin>>x>>y;
  cout<<"�����еĴ�����:"<<max(x,y)<<'\n';
  return 0; 
}
