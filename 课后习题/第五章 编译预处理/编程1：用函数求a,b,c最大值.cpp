#include<iostream>
using namespace std;
int max(int a,int b)
{ int i;
 i=a>b?a:b;
 return i;
}
int main()
{ int a,b,c,z;
 cout << "����Ļ�����a,b,c:";
 cin>>a>>b>>c;
 z=max(max(a,b),c);
 cout << "a,b,c�����ֵ" <<z;
 return 0;
}
