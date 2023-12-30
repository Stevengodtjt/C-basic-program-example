#include<iostream>
using namespace std;
int a=2;
int main()
{ int b=3;
  if(++a||b--)  
  cout<<"first:"<<a<<'\t'<<b<<endl;
  {  int a=5;
     b=a*3;
     cout<<"second:"<<a<<'\t'<<b<<endl;
  }
  a+=b;
  cout<<"third:"<<a<<'\t'<<b<<endl;
  return 0;
} 
