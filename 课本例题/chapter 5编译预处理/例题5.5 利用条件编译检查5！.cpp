#include<iostream>
#define DEBUG            //A�����˺���DEBUG
using namespace std;
int main()
{   int n=5,s=1;
    for(int i=1;i<=n;i++)
    {  s=s*i;
       #ifdef DEBUG       //B���DEBUG�ж��������
	   cout<<"i="<<i<<'\t'<<"s="<<s<<endl;   //C�����������
	   #endif                                //����������� 
    }
    cout<<n<<"!="<<s<<endl;
    return 0;
} 
