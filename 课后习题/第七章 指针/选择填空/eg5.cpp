#include<iostream>
using namespace std;
int main()
{int a[3][2]={{1,2},{10,20},{15,30}};
 int x,*p;
 p=&a[0][0];
 x=*p*(*(p+3))*(*(p+5));
 cout<<x;
 return 0;
}
