#include<iostream>
using namespace std;
int main()
{ int i,j;
 char ch[100];
 cout<<"输入字符串:";
 cin.getline(ch,100);
 for(i=0;i<100;i++)
   { if(ch[i]==32)            //空格的ASCII码为32 
     { for(j=i;j<99;j++)
         {ch[j]=ch[j+1];} 
         i--;  
	                  //继续判断是否有相同的数据 
     }
 
   } 
 cout << "删除空格后的数组为:" <<ch;
}
