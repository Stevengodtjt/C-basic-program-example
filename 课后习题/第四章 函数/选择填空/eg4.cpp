#include<iostream>
using namespace std;
int invert(int x)
{ int s;
  for(s=0;x>0;x=x/10)        //����һ�����������䷴������ӵõ�һ���µ��������ظ��ò��輴�ɵõ������� 
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
  cout<<n<<",count="<<c<<endl;  //n��Ϊ���յĻ����� 
  return 0;
  
}
