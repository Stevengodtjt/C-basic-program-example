#include<iostream>
using namespace std;
class Student
{   private:
      double a,b,c;
    public:
    void Setgrade(double x,double y,double z);
    double Average(void);                    //������ƽ���� 
    void Show(void);
};
void Student::Setgrade(double x,double y,double z)
     {a=x; b=y; c=z; }
     
     double Student::Average(void)
    {return (a+b+c)/3;}
      
	  void Student::Show(void)
	  {  
	    cout<<"ѧ������Ϊ:TJT"<<endl;
	    cout<<"������ѧ����ѧ�ɼ�:"<<a<<'\n';
         cout<<"������ѧ������ɼ�:"<<b<<'\n';
         cout<<"������ѧ��Ӣ��ɼ�:"<<c<<'\n';
         cout<<'\n';
	  }
int main() 
{  double x,y,z,aver;
   Student stu;
   cout<<"����ѧ������Ӣ���˳������ѧ�����Ƴɼ�:";
   cin>>x>>y>>z; 
   stu.Setgrade(x,y,z);
   stu.Show();
   cout<<"ѧ��ƽ���ɼ�Ϊ:"<<stu.Average();
   return 0; 
    
}
