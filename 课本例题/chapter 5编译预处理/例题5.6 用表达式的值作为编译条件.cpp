#include<iostream>
using namespace std;
int main()
{  int n=5,s=1;
   for(int i=1;i<=n;i++)
   {   s=s*i;
       #if 1            //A���ʽΪ1����ʾ�����������������롣����Ϊ#if 0 ��ֻ���5��=120 
	   cout<<"i="<<i<<'\t'<<"s="<<s<<endl;  //B
	   #endif           //����������� 
   }
   cout<<n<<"!="<<s<<endl;
   return 0;
} 
