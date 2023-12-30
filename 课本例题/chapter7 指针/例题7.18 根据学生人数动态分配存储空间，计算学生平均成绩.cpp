#include<iostream>
using namespace std;
int main()
{   int *p,n;
    double s=0;
    cout<<"请输入学生数:";
	cin>>n;
	p=new int[n];   //根据n的数目动态分配存储空间，空间的首地址为p
	for(int i=0;i<n;i++)
	{  cout<<"请输入第"<<i+1<<"个学生的成绩:";
	  cin>>p[i];        //向已分配的空间输入数据
	  s=s+p[i]; 
	} 
	cout<<"学生的平均成绩为:"<<s/n<<endl;
	delete []p;         //释放动态分配的存储空间
	return 0; 
}
