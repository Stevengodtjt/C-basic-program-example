 #include<iostream >
#include<cstring>
using namespace std;
struct student
{	int id;
	char name[20];
	float score[4];
};
int main()
{	student stu, *p;
	p=&stu;		      //Ϊ�ṹ��ָ�������ֵ
	stu.id=1011;	  //�ñ�����.��Ա������ʽ���ó�Ա
	strcpy(stu.name,"Zhang");
	stu.score[0]=90;
	stu.score[1]=95;
	stu.score[2]=80;
	stu.score[3]=88;
	cout<<p->name<<"����Ϣ����:\n";	   //��ָ����->��Ա������ʽ���ó�Ա
	cout<<p->id<<'\t'<<p->name<<'\t';
	for(int i=0;i<4;i++)
		cout<<p->score[i]<<'\t';
	cout<<endl;
	return 0;
}

