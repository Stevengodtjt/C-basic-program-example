#include<iostream>
using namespace std;
int main()
{ int i,j;
 char ch[100];
 cout<<"�����ַ���:";
 cin.getline(ch,100);
 for(i=0;i<100;i++)
   { if(ch[i]==32)            //�ո��ASCII��Ϊ32 
     { for(j=i;j<99;j++)
         {ch[j]=ch[j+1];} 
         i--;  
	                  //�����ж��Ƿ�����ͬ������ 
     }
 
   } 
 cout << "ɾ���ո�������Ϊ:" <<ch;
}
