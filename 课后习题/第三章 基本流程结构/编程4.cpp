#include<iostream>
using namespace std;
int main()
{ int a,n,i,z=0,b=0;
  cout << "´Ó¼üÅÌÉÏÊäÈëa,n:";
  cin >>a>>n ; 
  for(i=0;i<=n-1;i++)
  {
    b=10*b+1;
    z=a*b+z;
  }
cout << "z=" <<z<< endl;
return 0;

}





