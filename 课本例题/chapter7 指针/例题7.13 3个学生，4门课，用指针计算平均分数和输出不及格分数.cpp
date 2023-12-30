#include<iostream>
using namespace std;
float average(int (*p)[4],int n)       //用行指针变量作形参
{ float aver=0;
  for(int i=0;i<n;i++,p++)      //行指针变量自加，指向下一行
   for(int j=0;j<4;j++)
     aver=aver+(*p)[j];
	 aver=aver/n/4;            //n代表人数 
	 return aver; 
} 
void output(int *p,int n)       
{  for(int i=0;i<n;i++,p++)    //列指针变量自加，指向下一个元素
    if(*p<60)
	 cout<<*p<<'\t';
	 cout<<endl; 
}
int main()
{    int a[3][4]={{80,90,80,70},{60,50,70,75},{55,80,75,75}};
     float aver;
     aver=average(a,3);
     output(a[0],12);
     cout<<"average="<<aver<<endl;
     return 0;
}
