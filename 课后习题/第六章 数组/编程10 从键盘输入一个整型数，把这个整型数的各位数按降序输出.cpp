#include <iostream>
using namespace std;
void sort(int a[],int n)
{
	int i,j,max;
	int t;
	for(i=0;i<n-1;i++)
	{	max=i;
		for(j=i+1;j<n;j++)
		{
			if(a[max]<a[j])
				max=j;
	    }
			t=a[i];
			a[i]=a[max];
			a[max]=t;
		
	}
}
int main()
{
	int x;
	int i=0,n;
	int a[100];
	cout<<"请输入一个整数: ";
	cin>>x;
	while(x)
	{
		a[i]=x%10;
		x=x/10;
		i++;
	}
	n=i;
	sort(a,n);
	for(i=0;i<n;i++)
		cout<<a[i];
	cout<<endl;
	return 0;
}

