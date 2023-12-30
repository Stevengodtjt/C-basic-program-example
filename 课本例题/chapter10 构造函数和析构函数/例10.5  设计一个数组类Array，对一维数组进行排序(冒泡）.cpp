#include<iostream>
using namespace std;
class Array      
{   int *p;             //����ָ�� 
    int n;             //�������
  public:
     Array(int a[],int m);   //���캯��
	 void Sort(void);         //����
	 void Show(void);         //��ʾ��������
	 ~Array();                //�������� 
} ;
  Array::Array(int a[],int m)  //���캯��
  {  n=m;                      //��m��ʼ��Ԫ�ظ���n
     p=new int[n];             //Ϊָ��p���䶯̬�洢�ռ�
	 for(int i=0;i<n;i++)
	  *(p+i)=a[i];             //������Ԫ�ص�ֵ��������ָ��洢 
  } 
  
  void Array::Sort()           //ѡ����С�������� 
  {  int i,j,t;
      for(i=0;i<n-1;i++)
       {     for(j=0;j<n-i-1;j++)
               {  if(p[j]>=p[j+1])
                  {t=p[j];
                   p[j]=p[j+1];
				   p[j+1]=t;
			      }
               }
              
       }
  }
  
  void Array::Show()               //�������Ԫ�� 
  {   for(int i=0;i<n;i++)
        cout<<p[i]<<'\t';
        cout<<endl;
  }
  
  Array::~Array()                  //�����������ͷ�new���ٵĴ洢�ռ�
  { if(p)  delete []p;}
  
int main()
{   int a[]={4,6,2,7,1,8};
    Array arr(a,sizeof(a)/sizeof(a[0]));   //������a�������������
	cout<<"ԭ����Ϊ:"<<'\n';
	arr.Show();
	arr.Sort();
	cout<<"����������Ϊ:"<<'\n';
	arr.Show();
	return 0; 
}
  
   
