/* 
��֪XYZ+YZZ=532������X,Y��ZΪ���֣���һ�������X,Y��Z��������ѭ���ṹ��
���������x,y,z�����е�out.txt������ж������������С� 
 
ע�⣺
1������ɾ��ע����䡣 
2��������begin-end֮����

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

 
