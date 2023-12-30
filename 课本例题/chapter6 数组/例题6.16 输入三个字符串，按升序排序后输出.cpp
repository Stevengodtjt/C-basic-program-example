#include<iostream>
#include<cstring>
using namespace std;
void swap(char a[],char b[])    //实现两个字符串的交换
{  char t[80];
   strcpy(t,a);  strcpy(a,b);  strcpy(b,t);
} 
int main()
{   char s1[80],s2[80],s3[80];
    cout<<"输入三个字符串:\n";
	cin.getline(s1,80);               //输入字符串
	cin.getline(s2,80);
	cin.getline(s3,80);
	if(strcmp(s1,s2)>0)  swap(s1,s2);      //判断字符串大小
	if(strcmp(s1,s3)>0)  swap(s1,s3);   
	if(strcmp(s2,s3)>0)  swap(s2,s3);
	cout<<"排序后的结果为:\n";
	cout<<s1<<endl<<s2<<endl<<s3<<endl;
	return 0; 
	 
}
