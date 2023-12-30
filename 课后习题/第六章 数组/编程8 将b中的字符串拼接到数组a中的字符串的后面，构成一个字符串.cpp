#include <iostream>
using namespace std;
int strcat(char a[],char b[])
{
	int i=0,j=0;
	while(a[i])
		  i++;
	while(a[i++]=b[j++]);
}
int main()
{
	char a[80],b[80];
	cout<<"ÇëÊäÈëÁ½¸ö×Ö·û´®: ";
	cin.getline (a,80);
	cin.getline(b,80);
	cout<<"×Ö·û´®aÎª: "<<a<<endl;
	cout<<"×Ö·û´®bÎª: "<<b<<endl;
	strcat(a,b);
	cout<<"×Ö·û´®a+bÎª:"<<a<<endl; 
	return 0;
}

