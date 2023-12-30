#include<iostream>
#include<cstring>
using namespace std;
void delchar(char *p,char c)
{  while(*p)
   {   if(*p==c)
        {  strcpy(p,p+1);
            p--;                //同一位置判断两次 
        }
      p++;
   }
}
int main()
{   char a[100]="stttudent",c='t';
    delchar(a,c);               //删除字符't'
	cout<<a<<endl;
	return 0; 
}

