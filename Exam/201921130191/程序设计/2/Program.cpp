/* 
��in.txt��ȡһ��������n
��1!+2��+3��+...+n!�ĺ͡�
��������out.txt��
���飺���������������long  int�� 
��:
in.txt
4
��out.txt
33
ע�⣺
1������ɾ��ע����䡣
2���Ѵ���д�������begin��end֮�䡣 
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
