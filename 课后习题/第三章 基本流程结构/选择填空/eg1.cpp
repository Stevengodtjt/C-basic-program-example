#include<iostream>
using namespace std;
int main()
{   int x=1,y=2,z=3;
    x+=y+=z;
    cout<<(x<y?x++:y++)<<'\n';
    return 0;
}
