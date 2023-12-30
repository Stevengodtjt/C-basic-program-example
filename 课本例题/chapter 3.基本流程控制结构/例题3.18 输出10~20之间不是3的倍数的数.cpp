#include<iostream>
using namespace std;
int main()
{   int i;
    for(i=10;i<=20;i++)
    { if(i%3==0)  continue;
      {cout<<i<<'\t';}
    }
    cout<<'\n';
    return 0;
}
