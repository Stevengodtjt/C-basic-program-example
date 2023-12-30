#include<iostream>
using namespace std;
void fun(int **p,int x[2][3])
{  **p=x[1][1];
}
int main()
{  int y[2][3]={1,2,3,4,5,6},*t;
   t=new int[2];
   fun(&t,y);
   cout<<*t<<endl;
   return 0;
} 
