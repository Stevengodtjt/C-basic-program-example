#include<iostream >
#include<cstring>
using namespace std;
struct student
{	int id;
	char name[20];
	char sex;
};
student num[]={{1011, "Zhang",'F'},{1012, "Liu", 'M'},{1013, "Wang",'M'}};	//��ʼ������Ԫ��	
int main()
{   int n=sizeof(num)/sizeof(student);		              //���������Ԫ�ظ���
    student temp;
    int i,j;
    for(i=0;i<n-1;i++)				//���ݷ�����
        for(j=0;j<n-i-1;j++)
            if(strcmp(num[j].name ,num[j+1].name )>0)	//���ַ����������Ƚ�name��С
            {	temp=num[j];		                     //����Ԫ�����廥��
	num[j]=num[j+1];
	num[j+1]=temp;
            }
    for(i=0;i<n;i++)
         {cout<<num[i].id<<'\t'<<num[i].name <<'\t'<<num[i].sex<<endl; }
    return 0;
}

