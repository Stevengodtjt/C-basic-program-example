#include<iostream>
using namespace std;
class Num               //�����������������Լ������С������ 
{                   
     int x,y;           //˽������ 
  public:
  	void Setxy(int a,int b);   //Ϊ����x��y��ֵ
	int gys();                 //�����Լ��
	int gbs();                 //����С������
};
void Num::Setxy(int a,int b)
{x=a;y=b;}
int Num::gys()              //ŷ������㷨
{  int r,m,n;
   m=x;
   n=y;
   if(m<n)
   {r=m; m=n; n=r;}
   while(r!=0)
   {  r=m%n;
      m=n;
      n=r;
   }
   return m;                   //�������Լ�� 
}
   int Num::gbs()
   {  int r=gys();
      return x*y/r;
   }
  int main()                 //��ʼ����2 
  {  Num num;                //������Ķ��� 
     int a,b;
     cout<<"��������������:";
	 cin>>a>>b;
	 num.Setxy(a,b);         //����Ķ���ֵ 
	 cout<<a<<","<<b<<"�����Լ����:"<<num.gys()<<'\t';
	 cout<<"��С��������:"<<num.gbs()<<endl;
	 return 0; 
  }
