#include<iostream>
#include<cstring>
using namespace std;
char *longstr(char *z[], int n)
{
	char *pmaxstr;
	int len,maxlen;
	pmaxstr=z[0];
	maxlen=strlen(z[0]);
	for(int i=1;i<n;i++)
	{
		len=strlen(z[i]);
		if(maxlen<len)
		{
			maxlen=len;
			pmaxstr=z[i];
		}
	}
	return pmaxstr;
}
int main()
{
	char *pstr[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	char *pmax;
	int n;
	n=sizeof(pstr)/sizeof(pstr[0]);
	pmax=longstr(pstr,n);
	cout<<"最长的字符串是: "<<pmax<<endl;
	return 0;
}
