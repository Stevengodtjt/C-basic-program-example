#include<iostream> 
using namespace std;
int main()
{ int a,b;
  cin>>a>>b;
  do
  {if(a>b){a= a-b;
          }else b=b-a;
  }while(a!=b);
  cout<<"result="<<a;
  cout<<'\n';
  return 0;
}

