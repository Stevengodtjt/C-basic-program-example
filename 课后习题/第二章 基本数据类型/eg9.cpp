#include<iostream>
using namespace std;
int main()
{   int m,a,b,c,d;
    cin>>m;
    a=m%10;     //��λ��m�ĸ�λ 
    b=m/10%10;  //��λ��m��ʮλ 
    c=m/100%10;  //��λ��m�İ�λ 
    d=m/1000;   //��λ��m��ǧλ 
    cout<<"a="<<a<<'\t'<<"b="<<b<<'\t'<<"c="<<c<<'\t'<<"d="<<d<<endl;
    return 0;
}
