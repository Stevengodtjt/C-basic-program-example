#include<iostream>
using namespace std;
class ARR
{   private:
	  int n;           //����ʵ��Ԫ�ظ���
	  int a[100];      //���ԭʼ���鼰�������
	     public:
		   ARR(int x[],int size);   //���캯������size��ʼ��n����x��ʼ������a
		   void delsame();          //�������a����ͬԪ�ص�ɾ������
		   void show();             //�����������ÿ��5��������ʽ�������Ļ�� 
};
ARR::ARR(int x[],int size)
{    n=size;
     for(int i=0;i<n;i++)
       a[i]=x[i];
}
void ARR::delsame()
{  int i,j;
    for(i=0;i<n-1;i++)
    {  if(a[i]==a[i+1])
	    {  for(j=i;j<n-1;j++)
		    {a[j]=a[j+1];}
			 n--;
			 i--; 
		}
    }
}
void ARR::show()
{   int sum=0;
    for(int i=0;i<n;i++)
    {   cout<<a[i]<<'\t';
         sum++;
        if(sum%5==0)
        cout<<endl;
    }
}

int main()
{  int b[]={1,2,2,3,4,4,5,6,6,7,8,8,8,9,10,10}; 
   ARR arr(b,sizeof(b)/sizeof(b[0]));
   arr.delsame();
   arr.show();
   return 0;
}






