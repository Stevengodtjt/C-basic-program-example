#include<iostream>
//#define DEBUG        //Aע�͵����У������в�ִ��
using namespace std;
int main()
{  int n=5,s=1;
   for(int i=1;i<=n;i++)
   {  s=s*i;
      #ifdef DEBUG        //B�������������������
	  cout<<"i="<<i<<'\t'<<"s="<<s<<endl;  //C���в������룬�����ɻ�����
	  #endif 
   }
   cout<<n<<"!="<<s<<endl;
   return 0;
} 

