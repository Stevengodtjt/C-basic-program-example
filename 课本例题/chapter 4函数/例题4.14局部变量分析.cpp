#include<iostream>
using namespace std;
int main()
{ int a=2,b=3;
  cout<<"first:"<<a<<'\t'<<b<<'\n';   //A
  { int a=5;
    b=a*3;
    cout<<"second:"<<a<<'\t'<<b<<'\n';  //B
  }
  b+=a;                                //C
  cout<<"third:"<<a<<'\t'<<b<<'\n';
  return 0;
  
} 
