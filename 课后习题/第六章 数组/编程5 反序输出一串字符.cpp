#include<iostream>
#include<cstring>
using namespace std;
int main()
{ int i,j,n,t;
 char ch[100];
 cout << "����һ���ַ���:"; 
 cin.getline(ch,100);
 n=strlen(ch);          //����ch���ֽ��� 
 for(i=0;i<n/2;i++)     //С��n/2��Ԫ�������n/2��Ԫ�ؽ��� 
 {t=ch[i];
  ch[i]=ch[n-1-i];
  ch[n-1-i]=t;
 }
 cout << "�������Ϊ:" <<ch;
}
