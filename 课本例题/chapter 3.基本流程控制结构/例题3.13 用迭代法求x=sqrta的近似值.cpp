#include<iostream>
#include<cmath>
using namespace std;
int main()
{  float x0,x1,a;
   cout<<"������һ������:";
   cin>>a;
   if(a<0)  {cout<<"a���ܿ�ƽ����"<<'\n';}
      else { x1=a/2;
             do{  x0=x1;
                  x1=(x0+a/x0)/2;
               }
            while(fabs(x1-x0)>1e-5);
            cout<<"a��ƽ����Ϊ��"<<x1<<'\n';
           }   
    return 0;
    
}

