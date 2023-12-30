#include<iostream>
#include<cstring>
using namespace std;
void del(char s[])
{  int i=0;
   while(s[i])   //遍历数组 
   {  if(s[i]>='0'&&s[i]<='9')   //当前字符为数字字符
        { strcpy(s+i,s+i+1);     //将当前字符后面的字符串覆盖到当前字符 
           i--;                  //当前字符保持不变，下一循环继续判断覆盖过的当前字符 (判断点前移) 
        } 
        i++;
   } 
}
int main()
{   char str[80];
    cout<<"请输入一个字符串:"<<'\n';
	cin.getline(str,80);
	del(str);
	cout<<str<<endl;
	return 0; 

}
