#include<iostream>
using namespace std;
class Student
{   private:
      double a,b,c;
    public:
    void Setgrade(double x,double y,double z);
    double Average(void);                    //求三科平均分 
    void Show(void);
};
void Student::Setgrade(double x,double y,double z)
     {a=x; b=y; c=z; }
     
     double Student::Average(void)
    {return (a+b+c)/3;}
      
	  void Student::Show(void)
	  {  
	    cout<<"学生姓名为:TJT"<<endl;
	    cout<<"请输入学生数学成绩:"<<a<<'\n';
         cout<<"请输入学生物理成绩:"<<b<<'\n';
         cout<<"请输入学生英语成绩:"<<c<<'\n';
         cout<<'\n';
	  }
int main() 
{  double x,y,z,aver;
   Student stu;
   cout<<"按数学、物理、英语的顺序输入学生三科成绩:";
   cin>>x>>y>>z; 
   stu.Setgrade(x,y,z);
   stu.Show();
   cout<<"学生平均成绩为:"<<stu.Average();
   return 0; 
    
}
