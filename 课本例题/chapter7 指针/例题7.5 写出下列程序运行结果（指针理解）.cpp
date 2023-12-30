#include<iostream>
using namespace std;
int main()
{  int a[4]={3,5,7,9};
   int *p=a;
   cout<<*p++<<endl;
   cout<<(*p)++<<endl;
   cout<<++*p<<endl;
   cout<<++(*p)<<endl;
   cout<<*++p<<endl;
   cout<<*(++p)<<endl;
   for(int i=0;i<4;i++)
   { cout<<*(a+i)<<'\t';
   }
   return 0;
}
