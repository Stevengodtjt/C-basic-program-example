#include<iostream>
using namespace std;
int main()
{   int grade;
    cout<<"����ٷ��Ƴɼ�:";
	cin>>grade;
	cout<<"����Ƴɼ�:";
	switch(grade/10)
	{
	case 10:
	case 9:cout<<"����"<<'\n';
	       break;
    case 8:cout<<"����"<<'\n';
	       break;
	case 7:cout<<"�е�"<<'\n';
	       break;
	case 6:cout<<"����"<<'\n';
	       break;
	default:cout<<"������"<<'\n'; 
	 
	} 
	return 0;
}
