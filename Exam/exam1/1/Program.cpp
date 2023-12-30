/* 从in.txt顺序读取所有的字符。把读取的顺序数字字符组成整数，输出到out.txt中。
每五个整数一行，整数与整数之间用一个空格隔开，第五个整数后没有空格直接换行。
最后一行未满五个整数的，最后一个整数后没有空格直接换行输出。
注意格式。
格式如下：
如:in.txt
)yR[6.[L`56*LVRA<%S<xu>267eT]r>Y~S523]/H80\X"E12D1\)
则out.txt
6 56 267 523 80
12 1
注意：请勿删除注释语句。 
---------------------------------------------------------------------------------------------------*/

	/**********  Begin  **********/






	/**********   End  ***********/

#include<fstream>
using namespace std;
int main()
{  ifstream inf("in.txt",ios::in);
   if(!inf)
   return 1;
   ofstream outf("out.txt",ios::out);
   char c;                               //c变量为读取
   int t=0, s=0;                        //s变量为读取的整数，t变量为整数的个数 
   bool flag=false;                      //false用来表示前一个字符是否为数字，是则为数字，否为不是数字
   while(inf>>c)
   {  if(c>='0'&&c<='9')
        {  s=s*10+c-'0';
          flag=true;
		}
   
        else
		{  if(flag)               //flag为true，表示以前读取的数需要输出了 
		     {  if(t!=0)
		         { if(t%5==0)
		            outf<<endl;         //五个一行
					else
					outf<<' ';        //未满5个用空格隔开 
		         }
		         outf<<s;
		         t++;
		         s=0; 
		     }
		     flag=false;
        }
    }
        //最后一个数据的处理
		if(flag)               //flag为true，表示以前读取的数需要输出 
		{   if(t!=0)
		        {  if(t%5==0)
		            outf<<endl;   //五个一行
					else outf<<' ';   //未满五个用空格隔开 
		        }
		        outf<<s;
		}
		outf<<endl;   //如果结束的话最后一个数也要换行
		inf.close();
		outf.close();
		return 0; 
    
}
