/* 
已知XYZ+YZZ=532，其中X,Y和Z为数字，编一程序求出X,Y和Z。必须用循环结构。
并依次输出x,y,z并换行到out.txt，如果有多组解请输出多行。 
 
注意：
1、请勿删除注释语句。 
2、必须在begin-end之间编程

---------------------------------------------------------------------------------------------------*/


	/**********  Begin  **********/
#include<fstream>
using namespace std;
int main()
{ int a,b,x,y,z;
  ifstream infile("in.txt");
  ofstream outfile;
  outfile.open("out.txt");
  for(x=0;x<=9;x++)
  for(y=0;y<=9;y++)
  for(z=0;z<=9;z++)
  { a=100*x+10*y+z;
    b=100*y+10*z+z;
  if(a+b==532)
  outfile<<x<<","<<y<<","<<z<<'\n';
  }
  return 0;
}
  















	/**********   End  ***********/

 
