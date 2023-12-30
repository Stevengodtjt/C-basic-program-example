#include<iostream>
using namespace std;
int main()
{    int m,i,j;     //m表示行数，i用于输出*前的空格，j用于输出* 
      for(m=1;m<=2;m++)
    { for(i=1;i<=3-m;i++)      //   行数：1   2   3   4   5 
       { cout<<" ";}           //   空格：2   1   0   1   2     第一第二行：空格数=3-m  第四第五行：空格数：i=m-3 
      for(j=1;j<=m;j++)        //    *  ：1   2   2   2   1                  *数=m                     *数=6-m 
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
