#include<iostream>
using namespace std;
int max(int x,int y)
{   int z;
    z=x>y?x:y;
    return(z);
}
int main()
{  extern int a,b;         //A����a��bΪ�ⲿ���ͱ���(����main����֮���ȫ�ֱ����������� 
   cout<<max(a,b)<<'\n';   //Bʹ��ȫ�ֱ���a��b
   return 0; 
}                         
int a=10,b=-8;            //C��main����֮����ȫ�ֱ���a��b 
