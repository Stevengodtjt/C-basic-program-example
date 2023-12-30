#include <iostream>
using namespace std;
int main()
{
	int i,j,k;
	int a[1000];
	for(i=2;i<=200;i++)
		a[i]=i;
	for(i=2;i<=200;i++)
		for(j=2;i*j<=200;j++)
			a[i*j]=0;
	for(i=2,k=0;i<=200;i++)
		if(a[i]!=0)
		{
			cout<<a[i]<<'\t';
			k++;
			if(k%5==0)
				cout<<endl;
		}
	return 0;
}

