#include<iostream>
#include<cstring>
using namespace std; 
void insert(char a[],char b[])
{  int i,j,flag=0;
   for(i=0,j=0;a[i]!='\0';i++)
   {  if(!(a[i]>='0'&&a[i]<='9'))          //���������ַ������ַ����Ƶ�����b
       { b[j++]=a[i];
         flag=1;
       }
	   else                              //�����ַ� 
	   { if(flag==1)              
	     { b[j++]='-';               //��һ�������ַ�����'-' 
	       flag=0;
	     }
	       b[j++]=a[i];                //���������ַ����θ��Ƶ�����b 
	   } 
   }
   b[j]='\0'; 
}
int main()
{  char str1[80],str2[80];
   cout<<"������һ���ַ���:";
   cin.getline(str1,80);
   insert(str1,str2);
   cout<<str2<<endl;
   return 0; 
}
