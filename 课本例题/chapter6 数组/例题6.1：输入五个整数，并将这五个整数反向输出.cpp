#include<iostream>
using namespace std;
int main()
{ int a[5],i;
  cout<<"输入5个数:\n";
  for(i=0;i<5;i++)
  { cin>>a[i];
  } 
  cout<<"反向输出这5个数:\n";
  for(i=4;i>=0;i--)
  cout<<a[i]<<'\t';
  cout<<endl;
  return 0; 
}
