#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{   ifstream infile("a1.txt");           //打开已存在的输入文件a1.txt
     if(!infile)                          //打开文件失败，输出提示信息，结束程序
	{cout<<"输入文件不存在,请先建立文件!\n";
	 exit(0);                            //程序结束 
	} 
	ofstream outfile;                   //创建输出文件流对象
	outfile.open("b1.txt");              //打开输出文件b1.txt
	if(!outfile)                        //打开文件失败，输出提示信息，结束程序
	{ cout<<"不能建立输出文件!\n";
	  exit(0); 
	} 
	
	int a[10];
	double sum=0,aver;
	for(int i=0;i<10;i++)
	{  infile>>a[i];                    //将输入文件中的数据输入到数组中
	   sum=sum+a[i];                      //数据求和 
	}
	aver=sum/10;                          //求数据平均值
	for(int i=0;i<10;i++)
	{  outfile<<a[i]<<'\t';               //将数组中的数据输出到磁盘文件中 
	} 
	outfile<<"sum="<<sum<<'\n'<<"aver="<<aver;  //输出和与平均值
	
	infile.close();                      //关闭输入文件
	outfile.close();                     //关闭输出文件
	return 0; 
}
