#include<iostream>
#include<cstring>
using namespace std;
int del(char s[],char sub[])
{  int i=0,j,k,flag=0;
   while(s[i])          //��������
   {  j=i;k=0;
      while(s[j]==sub[k]&&s[j]!='\0')    //�����Ӵ��Ƚ� 
	 { j++;
	   k++;
	 } 
	     if(sub[k]=='\0')  
	     { flag=1;        //�ҵ��Ӵ������ñ��λ
		   strcpy(s+i,s+j);  //ɾ���Ӵ�
		   i--;
	     }
	     i++;
   } 
   if(flag==1) return 1;          //���ҵ��Ӵ�����1 
   else return 0;
}
int main()
{  char str[80],substr[10];
   int n;
   cout<<"������һ���ַ���:";
   cin.getline(str,80);
   cout<<"������һ���Ӵ�:";
   cin.getline(substr,10);
   n=del(str,substr);
   if(n==1) cout<<"ɾ���Ӵ�����ַ���Ϊ:"<<str;
   else cout<<str<<"��δ�ҵ�"<<substr<<"�Ӵ�"<<endl;
   return 0; 
}

