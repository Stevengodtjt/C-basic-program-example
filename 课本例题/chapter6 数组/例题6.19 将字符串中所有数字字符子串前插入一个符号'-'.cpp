#include<iostream>
#include<cstring>
using namespace std; 
void insert(char a[],char b[])
{  int i,j,flag=0;
   for(i=0,j=0;a[i]!='\0';i++)
   {  if(!(a[i]>='0'&&a[i]<='9'))          //不是数字字符，将字符复制到数组b
       { b[j++]=a[i];
         flag=1;
       }
	   else                              //数字字符 
	   { if(flag==1)              
	     { b[j++]='-';               //第一个数字字符插入'-' 
	       flag=0;
	     }
	       b[j++]=a[i];                //其余数字字符依次复制到数组b 
	   } 
   }
   b[j]='\0'; 
}
int main()
{  char str1[80],str2[80];
   cout<<"请输入一个字符串:";
   cin.getline(str1,80);
   insert(str1,str2);
   cout<<str2<<endl;
   return 0; 
}
