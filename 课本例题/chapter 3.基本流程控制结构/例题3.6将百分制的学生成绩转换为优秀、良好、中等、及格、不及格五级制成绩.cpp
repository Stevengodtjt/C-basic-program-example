#include<iostream>
using namespace std;
int main()
{   int grade;
    cout<<"输入百分制成绩:";
	cin>>grade;
	cout<<"五分制成绩:";
	switch(grade/10)
	{
	case 10:
	case 9:cout<<"优秀"<<'\n';
	       break;
    case 8:cout<<"良好"<<'\n';
	       break;
	case 7:cout<<"中等"<<'\n';
	       break;
	case 6:cout<<"及格"<<'\n';
	       break;
	default:cout<<"不及格"<<'\n'; 
	 
	} 
	return 0;
}
