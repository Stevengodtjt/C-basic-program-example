#include<iostream>
#include<cstring>
using namespace std;
void delchar(char *p,char c)
{  while(*p)
   {   if(*p==c)
        {  strcpy(p,p+1);
            p--;                //ͬһλ���ж����� 
        }
      p++;
   }
}
int main()
{   char a[100]="stttudent",c='t';
    delchar(a,c);               //ɾ���ַ�'t'
	cout<<a<<endl;
	return 0; 
}

