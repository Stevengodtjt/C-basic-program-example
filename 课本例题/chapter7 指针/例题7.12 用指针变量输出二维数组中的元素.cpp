#include<iostream>
using namespace std;
int main()
{  int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12},k=0;
   int *p;
   for(p=a[0];p<a[0]+12;p++)  //为指针变量赋值
   {  cout<<*p<<'\t';
       k++;
       if(k%4==0)
        cout<<endl;
   } 
   return 0;

}
