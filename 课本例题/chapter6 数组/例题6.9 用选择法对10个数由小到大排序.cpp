#include<iostream>
using namespace std;
void sort(int a[],int n)     //ѡ������
{  int i,j,min,t;
   for(i=0;i<n-1;i++)
   {  min=i;                  //����min�ĳ�ֵ
      for(j=i+1;j<n;j++)
	   { if(a[min]>a[j])      //ѭ���ҳ���Сֵ����Ÿ���min 
	      min=j;
	   }  
		 t=a[i];            //����a[i]��a[min] 
         a[i]=a[min];
         a[min]=t;
	   
   }
} 
int main()
{   int b[]={9,9,4,0,2,5,8,2},i,n;
    n=sizeof(b)/sizeof(b[0]);         //sizeof�������ֽ���
	sort(b,n);                        //��ѡ��������
	cout<<"��������������:"<<'\n';
	for(i=0;i<n;i++)
	{ cout<<b[i]<<'\t';
	} 
	cout<<endl;
	return 0;
}
