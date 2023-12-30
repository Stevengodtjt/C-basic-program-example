#include<iostream>
using namespace std;
int main()
{  char *week[]={"Monday","Tuesday","Wednesday","Thursday","Friday"};
   char **p;
   for(p=week;p<week+5;p++)
   cout<<*p<<endl;
   return 0;
}
