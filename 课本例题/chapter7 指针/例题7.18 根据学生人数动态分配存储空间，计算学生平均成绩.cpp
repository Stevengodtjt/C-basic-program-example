#include<iostream>
using namespace std;
int main()
{   int *p,n;
    double s=0;
    cout<<"������ѧ����:";
	cin>>n;
	p=new int[n];   //����n����Ŀ��̬����洢�ռ䣬�ռ���׵�ַΪp
	for(int i=0;i<n;i++)
	{  cout<<"�������"<<i+1<<"��ѧ���ĳɼ�:";
	  cin>>p[i];        //���ѷ���Ŀռ���������
	  s=s+p[i]; 
	} 
	cout<<"ѧ����ƽ���ɼ�Ϊ:"<<s/n<<endl;
	delete []p;         //�ͷŶ�̬����Ĵ洢�ռ�
	return 0; 
}
