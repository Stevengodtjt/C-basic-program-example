#include<iostream>
using namespace std;
int main()
{   int i,j,row=0,col=0,min;       //row记录最小值的行号，col记录列号 
    int a[3][3]={1,-2,0,4,-5,6,2,4}; //数组初始化
	min=a[0][0];                    //指定最小值
	for(i=0;i<3;i++)
	{  for(j=0;j<3;j++)            //双重循环遍历数组 
	      { if(a[i][j]<min)
	        { min=a[i][j];
	          row=i;
	          col=j;
	        }
	      }
	} 
	cout<<"a数组的最小元素是:a["<<row<<"]["<<col<<"]="<<min<<endl;
	return 0; 
}
