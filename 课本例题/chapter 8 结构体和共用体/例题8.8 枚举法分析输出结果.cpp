#include<iostream>
using namespace std;
int main( )
{ enum team{ qiaut, cubs=4, pick, dodger=qiaut-2};
  cout<<qiaut<<'\t'<<cubs<<'\t';
  cout<<pick<<'\t'<<dodger<<endl;
  return 0;
}

