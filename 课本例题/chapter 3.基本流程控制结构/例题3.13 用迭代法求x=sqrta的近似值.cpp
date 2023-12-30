#include<iostream>
#include<cmath>
using namespace std;
int main()
{  float x0,x1,a;
   cout<<"请输入一个正数:";
   cin>>a;
   if(a<0)  {cout<<"a不能开平方！"<<'\n';}
      else { x1=a/2;
             do{  x0=x1;
                  x1=(x0+a/x0)/2;
               }
            while(fabs(x1-x0)>1e-5);
            cout<<"a的平方根为："<<x1<<'\n';
           }   
    return 0;
    
}

