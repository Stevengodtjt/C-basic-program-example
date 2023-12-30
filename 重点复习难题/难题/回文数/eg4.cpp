#include<iostream>
using namespace std;
int invert(int x)
{ int s;
  for(s=0;x>0;x=x/10)        //任意一个正整数与其反序数相加得到一个新的整数，重复该步骤即可得到回文数 
  {s=s*10+x%10;}
  return s;
}
int main()
{ int n,c=0;
  cout<<"input a number:";
  cin>>n;
  while(n<=0)
  { cout<<"input a number:";
    cin>>n; 
  }
  n=n+invert(n);
  c++;
  while(n!=invert(n))
  { n=n+invert(n);
    c++;
  }
  cout<<n<<",count="<<c<<endl;  //n即为最终的回文数 
  return 0;
  
}
