#include<iostream>
using namespace std;
int main()
{   int i=5;
    do{  switch(i%2)
         {
         	case 0:i--;break;
         	case 1:i--;continue;
         }
         i--;
         cout<<i;
      }while(i>0);
      cout<<'\n';
      return 0;
}
