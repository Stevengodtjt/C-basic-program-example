#include<iostream>
using namespace std;
int max(int a,int b,int c)
{ int x,y;
 if(a>=b) {x=a;}
 else {x=b;}
 if(x>=c) {y=x;}
 else {y=c;}
 return y;
}
int main()
{ int g,i,j,k;
 cout << "������Ļ������i,j,k"<<'\n';
 cin>>i>>j>>k;
 g=max(i,j,k);
 cout << "i,j,k�����ֵΪ:"<<g;
 return 0;
}
