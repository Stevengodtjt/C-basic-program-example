#include<iostream>
using namespace std;
int mini;                        //ȫ�ֱ�������ʾ��Сֵ��δ����ֵʱ��ֵΪ0 
int max(int x,int y)             //�������ֵ
{ int z;
  mini=(x<y)?x:y;                //ȫ�ֱ���       
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
