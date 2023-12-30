#include<iostream>
using namespace std;
int main()
{  char ch[]={"652ab31"};
   int i,s=0;
   for(i=0;ch[i]>='0'&&ch[i]<='9';i=i+2)
    s=s*10+ch[i]-'0';
	cout<<s<<endl;
	return 0; 
} 
