/*
�ҳ�2��100֮������������������浽out.txt�У�ÿ������ռһ�С�
���磺out.txt
2
3
5
7
ע�⣺����ɾ��ע����䡣
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
