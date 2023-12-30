#include<iostream>
using namespace std;
struct code
{  int x;
   char *y;
}tab[2]={{1,"ab"},{2,"cd"}};
int main()
{  code *p=tab;
   cout<<*p->y<<'\n';
   cout<<*(++p)->y;
   return 0;
}

