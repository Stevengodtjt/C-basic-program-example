#include<iostream>
using namespace std;
struct student            //声明student的结构体类型
{ int id;                 //学号
  char name[20];          //姓名
  float score[4];         //成绩
  float aver;             //平均成绩 
}; 
int main()
{  student stu;           //定义结构体类型的变量
   cout<<"请输入学生学号:";
   cin>>stu.id;           //输入学号
   cin.get();             //去除输入缓冲区的回车
   cout<<"请输入学生姓名:";
   cin.getline(stu.name,20);  //输入学生姓名
   stu.aver=0;
   cout<<"请输入"<<stu.name<<"四门课成绩:";
   for(int i=0;i<4;i++)
   {  cin>>stu.score[i];
      stu.aver=stu.aver+stu.score[i];
   }
   stu.aver=stu.aver/4;
   cout<<stu.name<<"的信息如下:\n";   //输出结构体变量中的各个成员
   cout<<"学号:"<<stu.id<<'\t'<<"姓名:"<<stu.name<<endl;
   cout<<"成绩:";
   for(int i=0;i<4;i++)
    cout<<stu.score[i]<<'\t';
    cout<<endl;
	cout<<"平均成绩:"<<stu.aver<<endl;
	return 0; 
}
