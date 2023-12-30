#include<iostream>
using namespace std;
int main()
{   int i=10;
    int &refi=i;
    refi=refi+2;
    cout<<i;
}
