#include<iostream>
using namespace std;
int max(int a,int b)
{ int i;
 i=a>b?a:b;
 return i;
}
int main()
{ int a,b,c,z;
 cout << "在屏幕上输出a,b,c:";
 cin>>a>>b>>c;
 z=max(max(a,b),c);
 cout << "a,b,c的最大值" <<z;
 return 0;
}
