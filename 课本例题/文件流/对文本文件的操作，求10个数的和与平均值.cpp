#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{   ifstream infile("a1.txt");           //���Ѵ��ڵ������ļ�a1.txt
     if(!infile)                          //���ļ�ʧ�ܣ������ʾ��Ϣ����������
	{cout<<"�����ļ�������,���Ƚ����ļ�!\n";
	 exit(0);                            //������� 
	} 
	ofstream outfile;                   //��������ļ�������
	outfile.open("b1.txt");              //������ļ�b1.txt
	if(!outfile)                        //���ļ�ʧ�ܣ������ʾ��Ϣ����������
	{ cout<<"���ܽ�������ļ�!\n";
	  exit(0); 
	} 
	
	int a[10];
	double sum=0,aver;
	for(int i=0;i<10;i++)
	{  infile>>a[i];                    //�������ļ��е��������뵽������
	   sum=sum+a[i];                      //������� 
	}
	aver=sum/10;                          //������ƽ��ֵ
	for(int i=0;i<10;i++)
	{  outfile<<a[i]<<'\t';               //�������е���������������ļ��� 
	} 
	outfile<<"sum="<<sum<<'\n'<<"aver="<<aver;  //�������ƽ��ֵ
	
	infile.close();                      //�ر������ļ�
	outfile.close();                     //�ر�����ļ�
	return 0; 
}
