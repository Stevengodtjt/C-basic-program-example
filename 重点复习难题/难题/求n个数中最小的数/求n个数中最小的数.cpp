#include<iostream>
using namespace std;
int main()
{ int a,k,i,n,min,j;
   cout << "输入n个数，n=:";
    cin >> n;
    cout << "输入第一个数k:";
    cin >> k;
    min=k;
    a=n-1;
     cout << "输入剩下"<<a<<"个数:" ;
     for(i=1;i<n;i++)
     { cin >> j;
       if(j<min)
       {min=j;}
     }
       cout<<"n个数的最小值是:"<<min;
       return 0;
}
