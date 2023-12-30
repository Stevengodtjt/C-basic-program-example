#include<iostream>
using namespace std;
int main()
{ char *s,*s1="Here";
  s=s1;
   while(*s1)  s1++;
cout<<(s1-s)<<endl;
return 0;
}
