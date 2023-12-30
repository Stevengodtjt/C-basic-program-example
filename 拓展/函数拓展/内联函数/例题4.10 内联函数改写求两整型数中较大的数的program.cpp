#include<iostream>
using namespace std;
inline int max(int a,int b)
      { return (a>b?a:b);}
int main()
{ int x,y;
  cout<<"输入两个数:\n";
  cin>>x>>y;
  cout<<"两数中的大数是:"<<max(x,y)<<'\n';
  return 0; 
}
