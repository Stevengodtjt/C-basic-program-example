#include<iostream>
#include<cmath>
using namespace std;
class Root           //��������һԪ���η��� 
{  
   double a,b,c;      //����ϵ��
  public:
    void Setroot(double x,double y,double z);   //���÷���ϵ��
	void fun();                                 //�󷽳̵ĽⲢ����� 	 
};
void Root::Setroot(double x,double y,double z)
{ a=x;
  b=y;
  c=z;
}

void Root::fun()                              //���������㷨��� 
{ double delta;
  delta=b*b-4*a*c;
  if(delta<0) cout<<"������ʵ��!\n";
  else
  { delta=sqrt(delta);
    if(delta)
    {  cout<<"��������������ʵ��:\n";
	   cout<<"x1="<<(-b+delta)/2/a<<'\n';
	   cout<<"x2="<<(-b-delta)/2/a<<'\n'; 
    }
    else
    { cout<<"�������������ʵ��:\n";
	  cout<<"x1=x2="<<-b/2/a<<'\n'; 
    }
  } 
}
int main()
{  Root root;
   double x,y,z;              //����һ��һԪ���η��̶���
   cout<<"�����뷽�̵�����ϵ��:";
   cin>>x>>y>>z;
   root.Setroot(x,y,z);        //Ϊ�ö����ϵ����ֵ
   root.fun();                 //�󷽳̵ĽⲢ���
   return 0; 
}
