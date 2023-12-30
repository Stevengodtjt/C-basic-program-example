#include<iostream>
#include<cstring>
using namespace std;
int main()
{ int i,j,n,t;
 char ch[100];
 cout << "输入一个字符串:"; 
 cin.getline(ch,100);
 n=strlen(ch);          //计算ch的字节数 
 for(i=0;i<n/2;i++)     //小于n/2的元素与大于n/2的元素交换 
 {t=ch[i];
  ch[i]=ch[n-1-i];
  ch[n-1-i]=t;
 }
 cout << "反序输出为:" <<ch;
}
