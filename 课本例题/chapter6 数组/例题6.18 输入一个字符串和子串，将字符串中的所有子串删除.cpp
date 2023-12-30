#include<iostream>
#include<cstring>
using namespace std;
int del(char s[],char sub[])
{  int i=0,j,k,flag=0;
   while(s[i])          //遍历数组
   {  j=i;k=0;
      while(s[j]==sub[k]&&s[j]!='\0')    //遍历子串比较 
	 { j++;
	   k++;
	 } 
	     if(sub[k]=='\0')  
	     { flag=1;        //找到子串后设置标记位
		   strcpy(s+i,s+j);  //删除子串
		   i--;
	     }
	     i++;
   } 
   if(flag==1) return 1;          //若找到子串返回1 
   else return 0;
}
int main()
{  char str[80],substr[10];
   int n;
   cout<<"请输入一个字符串:";
   cin.getline(str,80);
   cout<<"请输入一个子串:";
   cin.getline(substr,10);
   n=del(str,substr);
   if(n==1) cout<<"删除子串后的字符串为:"<<str;
   else cout<<str<<"中未找到"<<substr<<"子串"<<endl;
   return 0; 
}

