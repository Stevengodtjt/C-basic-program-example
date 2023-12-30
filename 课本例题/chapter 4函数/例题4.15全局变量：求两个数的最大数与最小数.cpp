#include<iostream>
using namespace std;
int mini;                        //全局变量，表示最小值，未赋初值时其值为0 
int max(int x,int y)             //返回最大值
{ int z;
  mini=(x<y)?x:y;                //全局变量       
  z=(x>y)?x:y;
  return z;
}
int main()
{ int a,b,c;
 cin>>a>>b;
 c=max(a,b);                   //A
 cout<<"The max is:"<<c<<endl;
 cout<<"The mini is:"<<mini<<endl;
 return 0;
}
