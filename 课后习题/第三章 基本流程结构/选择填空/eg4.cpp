#include<iostream>
using namespace std;
int main()
{  char ch;
   cin>>ch;
   while(ch!='z')
   {   switch(ch)
       { case'a':
       	 case'b':cout<<'1'<<endl;  break;
       	 case'c':cout<<'3'<<endl;
       	 default:cout<<"default"<<endl;
       }
       cin>>ch;
   }
   return 0;
}
