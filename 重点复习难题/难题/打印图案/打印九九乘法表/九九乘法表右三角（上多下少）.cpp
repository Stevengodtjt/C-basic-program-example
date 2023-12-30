#include <iostream>
#include<iomanip>
using namespace std;
int main()
{ 
	 int  m=0, n=0;
	 for (m=1; m<10; m++)    //第一行 
		{ cout<<setw(4)<<m;  }  //打印表头  
	     cout<<endl;

	 for (m=1; m<10; m++)     //第二行字符（三个空格）对齐 
		 {cout<<"   -";} 
		 cout<<endl;

   for (m=1; m<10; m++) 	//m为行，n为列 
   {
		for (n=1; n<=10-m; n++)
		{
	     cout<<setw(4)<<m * n; 	
    	}
	      cout<<endl;
   }
        return  0;
}

