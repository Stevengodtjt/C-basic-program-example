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
	p=&stu;		      //为结构体指针变量赋值
	stu.id=1011;	  //用变量名.成员名的形式引用成员
	strcpy(stu.name,"Zhang");
	stu.score[0]=90;
	stu.score[1]=95;
	stu.score[2]=80;
	stu.score[3]=88;
	cout<<p->name<<"的信息如下:\n";	   //用指针名->成员名的形式引用成员
	cout<<p->id<<'\t'<<p->name<<'\t';
	for(int i=0;i<4;i++)
		cout<<p->score[i]<<'\t';
	cout<<endl;
	return 0;
}

