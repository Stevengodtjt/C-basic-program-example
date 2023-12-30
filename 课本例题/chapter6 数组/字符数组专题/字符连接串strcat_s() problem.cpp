#include<iostream>
#include <cstring>
using namespace std;
int main()
{  int n;
   char str1[12]="I am a ";
   char str2[]="boy";
   cout<<strcat_s(str1,strlen(str1)+strlen(str2)+1,str2)<<endl;
   cout<<str1;
   return 0;
}
