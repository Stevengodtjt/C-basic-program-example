#include<iostream>
#include<cstring>
using namespace std;
int convert(char s1[],char s2[])
{  int i=0,j,s;
   char tab[8][4]={"000","001","010","011","100","101","110","111"};
   for(i=0,j=0;s1[i]!='\0';i++,j=j+3)
   strcpy(&s2[j],tab[s1[i]-'0']);
     for(i=0,s=0;i<strlen(s2);i++)
        s=s*2+s2[i]-'0';
		return s;   
}
int main()
{   char ss1[]="15",ss2[80];
    int y;
    y=convert(ss1,ss2);
    cout<<y<<'\t'<<ss2<<endl;
    return 0;
}

