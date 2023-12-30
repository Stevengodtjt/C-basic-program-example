#include<iostream>
using namespace std;
void recu(char c)
{ cout<<c;
  if(c<'3')  recu(c+1);
  cout<<c;
}
int main()
{  recu('0');
    return 0;
}
