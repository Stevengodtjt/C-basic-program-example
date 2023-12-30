#include <iostream>
using namespace std;
void strcpy(char a[],char b[])
{
	int i=0,j=0;
	while(a[i++]=b[j++]);
}
int main()
{
	char a[80],b[80];
	cout<<"ÇëÊäÈëÒ»¸ö×Ö·û´®: ";
	cin.getline (b,80);
	strcpy(a,b);
	cout<<"×Ö·û´®bÎª: "<<b<<endl;
	cout<<"×Ö·û´®aÎª: "<<a<<endl;
	return 0;
}

