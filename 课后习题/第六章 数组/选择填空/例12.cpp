#include<iostream>
#include<cstring> 
using namespace std;
int main()
{  char st[20]="hello\0\t\'\\";
  cout<<strlen(st)<<endl;
   return 0; 
} 
