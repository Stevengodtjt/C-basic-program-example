#include<iostream>
#include<cstring>
using namespace std;
int main()
{  char p1[20]="abcd",*p2="ABCD";
   char str[50]="xyz";
   strcpy(str+2,strcat(p1+2,p2+1));    //�Ӽ�����ӵڼ�����ʼ���� 
   cout<<str<<endl;
   return 0;
}
