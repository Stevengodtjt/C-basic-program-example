#include<iostream>
using namespace std;
int func(int x)
{ if(x<100)  return x%10;
  else
     return func(x/100)*10+x%10;
} 
int main()
{ cout<<"The result is:"<<func(132645)<<endl;
  return 0; 
}
