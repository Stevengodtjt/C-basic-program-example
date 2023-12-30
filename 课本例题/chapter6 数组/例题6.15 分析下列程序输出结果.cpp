#include<iostream>
#include<cstring>
using namespace std;
int main()
{  char str[10]="12345",str1[10]="ABCDE",str2[]="abcde";
   strcpy(str1+4,str2+3);
   strcat(str,str1+2);
   cout<<str<<endl;
   return 0;
}
