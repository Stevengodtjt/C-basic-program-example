#include<iostream>
#include<cstring>
using namespace std;
void del(char s[])
{  int i=0;
   while(s[i])   //�������� 
   {  if(s[i]>='0'&&s[i]<='9')   //��ǰ�ַ�Ϊ�����ַ�
        { strcpy(s+i,s+i+1);     //����ǰ�ַ�������ַ������ǵ���ǰ�ַ� 
           i--;                  //��ǰ�ַ����ֲ��䣬��һѭ�������жϸ��ǹ��ĵ�ǰ�ַ� (�жϵ�ǰ��) 
        } 
        i++;
   } 
}
int main()
{   char str[80];
    cout<<"������һ���ַ���:"<<'\n';
	cin.getline(str,80);
	del(str);
	cout<<str<<endl;
	return 0; 

}
