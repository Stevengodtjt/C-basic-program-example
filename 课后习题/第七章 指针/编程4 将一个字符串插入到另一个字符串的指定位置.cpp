#include<iostream>
#include<cstring>
using namespace std;

int main()
 {char cwq[200];
   char a[200];
 int n,x,y,b,c,d;
   cout<<"ԭ�ַ���"<<'\n';
   cin.getline(cwq,200);
   cout<<"�����ַ���"<<'\n';
   cin.getline(a,200);
   cout<<"�ڵڼ����ַ������"<<'\n';
   cin>>n;
   x=strlen(cwq);
   y=strlen(a);
   char *p=cwq;
   char *q=a;
   for(c=0;c<y;c++)    //y���ַ�����Ҫ�ƶ��ĸ��� 
   for(b=0;b<x-n;b++)  //x-��n���� ������Ҫ�ƶ����ַ������� 
   *(p+x-b+c)=*(p+x-1-b+c);  //ͨ���ҹ��ɿ�ʼ�ƶ�ָ�벢��ֵ 
   for(d=0;d<y;d++)
   *(p+n+d)=*(q+d);  //��Ҫ������ַ�������ճ����Ŀո��� 
   *(p+x+y)='\0';
    cout<<cwq;
    return 0;
}
