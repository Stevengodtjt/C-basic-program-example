#include<iostream>
using namespace std;
int main()
{ int a[5],i;
  cout<<"����5����:\n";
  for(i=0;i<5;i++)
  { cin>>a[i];
  } 
  cout<<"���������5����:\n";
  for(i=4;i>=0;i--)
  cout<<a[i]<<'\t';
  cout<<endl;
  return 0; 
}
