#include<iostream>
using namespace std;
int fun( int x)
{ int prime=1,a,b,c,d;
 a=x/1000;
 b=x/100%10;
 c=x/10%10;
 d=x%10;
 if(a==d&&b==c) prime=0;
 return prime;
}
int main()
{ int i,j;
 cout << "1000��2000�Ļ�����Ϊ:" << endl;
 for(i=1000;i<=2000;i++)
   { j= fun(i);
     if(j==0) cout <<i<<'\n';
   }
 return 0;
}
