#include<iostream>
using namespace std;
class ARR
{   private:
	  int n;              //数组元素个数 
	  int a[100];
   	  int max,maxindex;   //最大值及最大值序号 
   	    public:
   	      ARR(int x[],int size);  //用size初始化n 
   	      void FindMax();          //求整型数组元素中的最大值及最大值序号
		  void Show();             //将数组元素以每行5个的形式输出到屏幕上 
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

