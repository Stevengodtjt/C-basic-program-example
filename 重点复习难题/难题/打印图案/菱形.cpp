#include<iostream>
using namespace std;
int main()
{    int m,i,j;     //m��ʾ������i�������*ǰ�Ŀո�j�������* 
      for(m=1;m<=2;m++)
    { for(i=1;i<=3-m;i++)      //   ������1   2   3   4   5 
       { cout<<" ";}           //   �ո�2   1   0   1   2     ��һ�ڶ��У��ո���=3-m  ���ĵ����У��ո�����i=m-3 
      for(j=1;j<=m;j++)        //    *  ��1   2   2   2   1                  *��=m                     *��=6-m 
      { cout<<"* ";}
        cout<<'\n'; 
    }
   if(m=3) {cout<<"*   *";}
      cout<<'\n';
 
      for(m=4;m<=5;m++)
      { for(i=1;i<=m-3;i++)
         {cout<<" ";}
         for(j=1;j<=6-m;j++)
         {cout<<"* ";}
           cout<<'\n';
      }

}
