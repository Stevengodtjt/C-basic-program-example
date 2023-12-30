/* 
从in.txt读取一个正整数n
求1!+2！+3！+...+n!的和。
结果输出到out.txt。
建议：结果的数据类型用long  int。 
如:
in.txt
4
则out.txt
33
注意：
1、请勿删除注释语句。
2、把代码写入下面的begin与end之间。 
---------------------------------------------------------------------------------------------------*/

	/**********  Begin  **********/
#include<fstream>
using namespace std;
int main()
{ int n,a,b;
  long int s=1,x=0;
  ifstream infile("in.txt");
  ofstream outfile;
  outfile.open("out.txt");
  infile>>n;
  for(a=1;a<=n;a++)
   { for(b=a;b>0;b--)
     s=s*b;
     x=x+s;
     s=1;
   }
   outfile<<x;
   return 0;
}







	/**********   End  ***********/
