#include<iostream>
#include<cstring>
using namespace std;
int main()
{  char b[30];
   strcpy(b,"GH");
   strcpy(&b[1],"DEF");
   strcpy(&b[2],"ABC");
   cout<<b<<endl;
   return 0;
} 
