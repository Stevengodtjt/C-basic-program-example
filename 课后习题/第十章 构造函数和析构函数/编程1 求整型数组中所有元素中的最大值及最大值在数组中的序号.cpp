#include<iostream>
using namespace std;
class ARR
{   private:
	  int n;              //����Ԫ�ظ��� 
	  int a[100];
   	  int max,maxindex;   //���ֵ�����ֵ��� 
   	    public:
   	      ARR(int x[],int size);  //��size��ʼ��n 
   	      void FindMax();          //����������Ԫ���е����ֵ�����ֵ���
		  void Show();             //������Ԫ����ÿ��5������ʽ�������Ļ�� 
};
        ARR::ARR(int x[],int size)
         {   n=size;
             for(int i=0;i<n;i++)
   	           a[i]=x[i];
         }
         void ARR::FindMax()
         {  max=a[0];
           maxindex=1;
		   for(int i=0;i<n;i++)
             {  
                 if(a[i]>=max)
                   {  max=a[i];
                      maxindex=i+1;
                   }
             }
             cout<<"max="<<max<<'\t'<<"maxindex="<<maxindex;
         }
         void ARR::Show()
         {  
		   for(int i=0;i<n;i++)
			 { cout<<a[i]<<'\t';
               if((i+1)%5==0) 
               cout<<endl;
             } 
         }
int main()
{   int b[]={3,4,6,8,10,34,2}; 
     ARR arr(b,sizeof(b)/sizeof(b[0]));
	 arr.Show();
	 cout<<endl;
	 arr.FindMax(); 
	 return 0;
}

