#include<iostream>
using namespace std;
int main()
{   int a[4][4];
     int m,n,i,j,x,k,z,sum=0;
     for(m=0;m<4;m++)
     {  for(n=0;n<4;n++)
        {cin >> a[m][n];}
     }
      for(i=0;i<=3;i++)
       { for(j=0;j<=3;j++)
            {   x=1;                 //每次换列时默认x=1 
                if(a[i][0]==a[i][1]&&a[i][1]==a[i][2]&&a[i][2]==a[i][3]||a[0][j]==a[1][j]&&a[1][j]==a[2][j]&&a[2][j]==a[3][j])  //若每一行或者每一列都是同一个数 ，则本行、本列必然无鞍点 
                x=0;
                for(k=0;k<=3;k++)                                          //k用于表示具体列数（此时i、j是定值） 
                 {if(a[i][j]<a[i][k])   x=0;}                              //a[i][j]是本行最大的数 
                  if(x==1)  
		          for(z=0;z<=3;z++)                                       //z用于表示具体列数（此时i、j是定值） 
			   {  if(a[i][j]>a[z][j])  x=0;  }                             //a[i][j]是本列最小的数 
			      if(x==1)
	             {cout<<"鞍点为:"<<a[i][j]; 
	              sum=sum+1;                      //因为若有鞍点，则只可能有一个，所以若sum一直为0，说明没有一个鞍点 
	             }  
			}	 
       }
 if(sum==0)
 cout<<"无鞍点"<<endl; 
       
}

