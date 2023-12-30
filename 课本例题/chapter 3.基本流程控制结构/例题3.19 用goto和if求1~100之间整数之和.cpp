#include<iostream>
using namespace std;
int main()
{   int i=1,s=0;
  loop:if(i<=100)
       {  s=s+i;
          i++;
          goto loop;
       }
       cout<<"s="<<s<<endl;
       return 0;
}
