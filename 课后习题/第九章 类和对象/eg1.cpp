#include<iostream>
using namespace std;
class MyClass
{  public:
	 int number;
	 void set(int);
};
int number=3;                //ȫ�ֱ���numberֵΪ3 
void MyClass::set(int i)     //�����ʼ�� 
{ number=i;}
int main()
{  MyClass my1;
   int number=10;         //�ֲ�����number ֵΪ10 
   my1.set(5);
   cout<<my1.number<<endl;
   my1.set(number);
   cout<<my1.number<<endl;
   my1.set(::number);         //����ȫ�ֱ�����numberֵ 
   cout<<my1.number<<endl;
   return 0;
}
