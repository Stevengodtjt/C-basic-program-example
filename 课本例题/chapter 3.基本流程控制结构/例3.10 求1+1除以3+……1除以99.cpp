#include<iostream>
using namespace std;
int main()
{  int i=1;
   float s=0,t;    //�ۼӺ�Ϊ������ 
   while(i<100)
   { t=1.0/i;      //ͨ��ı�ʾ 
     i=i+2;        //��ĸ���е��� 
     s=s+t;        //�����ۼӺ� 
   }
   cout<<"s="<<s<<'\n';
   return 0;
}
