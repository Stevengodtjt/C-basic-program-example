#include<iostream>
using namespace std;
int main()
{ int a,b,c,i,n;
 for(n=100;n<=999;n++)
 {   a=n/100;
     b=n%100/10;
     c=n%10;
     i=n/11;
     if(i==a*a+b*b+c*c&&(a==b||a==c||b==c||a==b==c))
     {cout<<"满足条件的三位正整数为:"<<n<<'\n';} 
 }
 return 0;
}
