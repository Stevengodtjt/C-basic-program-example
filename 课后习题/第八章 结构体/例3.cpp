#include<iostream>
using namespace std;
struct st
{  int a;
   int *b;
};
int main() 
{  int t;
   int m1[]={10,100},m2[]={100,200};
   st *p,x[]={99,m1,100,m2};
   p=x;
   t=*(++p)->b;
   cout<<t;
   return 0;
}
