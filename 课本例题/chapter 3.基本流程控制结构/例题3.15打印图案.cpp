#include<iostream>
using namespace std;
int main()
{  int i,j,k;
   for(i=1;i<=4;i++)                              //控制上面四行
     {  for(j=1;j<=4-i;j++)                      //控制*前的空格数 
         {cout<<' ';}                            //输出一个空格 
            for(k=1;k<=2*i-1;k++)                //控制*的个数 
              {cout<<'*'; }                     //输出完一行后换行
			     cout<<'\n'; 
    }
                  for(i=1;i<=3;i++)               //控制下面三行
			      {  for(j=1;j<=i;j++)           //控制*前的空格数 
			          {cout<<' '; }               //输出一个空格 
			          for(k=1;k<=2*(3-i)+1;k++)   //控制*的个数		
					    {cout<<'*';}
					     cout<<'\n';
				  }              
	 
	  
	 return 0;
}
