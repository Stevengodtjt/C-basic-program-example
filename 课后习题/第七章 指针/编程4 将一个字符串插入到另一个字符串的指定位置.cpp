#include<iostream>
#include<cstring>
using namespace std;

int main()
 {char cwq[200];
   char a[200];
 int n,x,y,b,c,d;
   cout<<"原字符串"<<'\n';
   cin.getline(cwq,200);
   cout<<"插入字符串"<<'\n';
   cin.getline(a,200);
   cout<<"在第几个字符后插入"<<'\n';
   cin>>n;
   x=strlen(cwq);
   y=strlen(a);
   char *p=cwq;
   char *q=a;
   for(c=0;c<y;c++)    //y：字符串需要移动的格数 
   for(b=0;b<x-n;b++)  //x-（n）： 插入点后要移动的字符串个数 
   *(p+x-b+c)=*(p+x-1-b+c);  //通过找规律开始移动指针并赋值 
   for(d=0;d<y;d++)
   *(p+n+d)=*(q+d);  //将要插入的字符串插入空出来的空格中 
   *(p+x+y)='\0';
    cout<<cwq;
    return 0;
}
