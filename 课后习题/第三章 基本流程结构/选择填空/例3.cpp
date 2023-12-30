#include<iostream>
using namespace std;
int main()
{    int x=4,y=5,m;
     m=(y>x++?x--:y++);
     cout<<"m="<<m<<endl;
     return 0;
}
