#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,y,z;
    for(x=1;x<20;x++) //Rooster less than 100/5
    {
        for(y=1;y<(100-5*x)/3;y++)
        {
             z=100-x-y;
            if(z%3==0 && 5*x+3*y+(100-x-y)/3==100)
            cout<<"Rooster£º"<<x<<'\t'<<"Hen:"<<y<<'\t'<<"chicken:"<<z<<endl;
         }
    }
     return 0;
}

