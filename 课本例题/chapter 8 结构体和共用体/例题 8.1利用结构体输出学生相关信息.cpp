#include<iostream>
using namespace std;
struct student            //����student�Ľṹ������
{ int id;                 //ѧ��
  char name[20];          //����
  float score[4];         //�ɼ�
  float aver;             //ƽ���ɼ� 
}; 
int main()
{  student stu;           //����ṹ�����͵ı���
   cout<<"������ѧ��ѧ��:";
   cin>>stu.id;           //����ѧ��
   cin.get();             //ȥ�����뻺�����Ļس�
   cout<<"������ѧ������:";
   cin.getline(stu.name,20);  //����ѧ������
   stu.aver=0;
   cout<<"������"<<stu.name<<"���ſγɼ�:";
   for(int i=0;i<4;i++)
   {  cin>>stu.score[i];
      stu.aver=stu.aver+stu.score[i];
   }
   stu.aver=stu.aver/4;
   cout<<stu.name<<"����Ϣ����:\n";   //����ṹ������еĸ�����Ա
   cout<<"ѧ��:"<<stu.id<<'\t'<<"����:"<<stu.name<<endl;
   cout<<"�ɼ�:";
   for(int i=0;i<4;i++)
    cout<<stu.score[i]<<'\t';
    cout<<endl;
	cout<<"ƽ���ɼ�:"<<stu.aver<<endl;
	return 0; 
}
