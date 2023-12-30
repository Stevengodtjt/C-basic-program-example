#include<iostream >
#include<cstring>
using namespace std;
struct student
{	int id;
	char name[20];
	char sex;
};
student num[]={{1011, "Zhang",'F'},{1012, "Liu", 'M'},{1013, "Wang",'M'}};	//初始化数组元素	
int main()
{   int n=sizeof(num)/sizeof(student);		              //计算数组的元素个数
    student temp;
    int i,j;
    for(i=0;i<n-1;i++)				//起泡法排序
        for(j=0;j<n-i-1;j++)
            if(strcmp(num[j].name ,num[j+1].name )>0)	//用字符串处理函数比较name大小
            {	temp=num[j];		                     //数组元素整体互换
	num[j]=num[j+1];
	num[j+1]=temp;
            }
    for(i=0;i<n;i++)
         {cout<<num[i].id<<'\t'<<num[i].name <<'\t'<<num[i].sex<<endl; }
    return 0;
}

