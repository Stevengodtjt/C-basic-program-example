#include<iostream>
using namespace std;
const int N=7;
int main()
{ double a[N]={2.6,7.3,4.2,5.4,6.2,3.8,1.4},max;   //�����ʼ��
  int i;
  max=a[0];
  for(i=1;i<N;i++)
  { if(a[i]>max)  
    max=a[i];               //���������нϴ����ȡ�� 
  } 
  cout<<"���ֵ="<<max<<endl;
  return 0; 
}
