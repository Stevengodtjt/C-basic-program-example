#include<iostream>
using namespace std;
int main()
{int n,a=0;
 cin>>n;
 int cwq[200]={0};
 while(n/2!=0||n==1)
 {
  cwq[a]=n%2;
  n=n/2;
  a++;
   }
 char c;
 int x,b;
 for(b=4*(a/4);b>=0;b=b-4)
 {
 c='A';
 x=cwq[b]+cwq[b+1]*2+cwq[b+2]*4+cwq[b+3]*8;
 if(x<10)
 cout<<x;
 if(x>9)
 {c=c+x-9;
 cout<<c;}}
 return 0;
}
