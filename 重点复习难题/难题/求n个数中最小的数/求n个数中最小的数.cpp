#include<iostream>
using namespace std;
int main()
{ int a,k,i,n,min,j;
   cout << "����n������n=:";
    cin >> n;
    cout << "�����һ����k:";
    cin >> k;
    min=k;
    a=n-1;
     cout << "����ʣ��"<<a<<"����:" ;
     for(i=1;i<n;i++)
     { cin >> j;
       if(j<min)
       {min=j;}
     }
       cout<<"n��������Сֵ��:"<<min;
       return 0;
}
