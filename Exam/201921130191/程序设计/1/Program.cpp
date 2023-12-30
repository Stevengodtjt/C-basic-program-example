/*
找出2到100之间的所有素数，并保存到out.txt中，每个素数占一行。
例如：out.txt
2
3
5
7
注意：请勿删除注释语句。
---------------------------------------------------------------------------------------------------*/

/*******Begin*******/
#include<fstream>
using namespace std;
int main()
{ int a,b,x;
  ofstream outfile;
  outfile.open("out.txt");
  for(a=2;a<101;a++)
  { x=1;
    for(b=2;b<a;b++)
    if(a%b==0)
    x=0;
    if(x==1)
    outfile<<a<<'\n'; 
     	
  }
	outfile.close();
  return 0;
} 








/*******End*******/
