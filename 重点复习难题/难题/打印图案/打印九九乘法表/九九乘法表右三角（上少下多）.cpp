#include <iostream>
#include<iomanip>
using namespace std;
int main()
{ 
	 int  m=0, n=0;
	 for (m=1; m<10; m++)    
		{ cout<<setw(4)<<m;  }  //´òÓ¡±íÍ·  
	     cout<<endl;

	 for (m=1; m<10; m++)   
		 {cout<<"   -";} 
          
   for (m=1; m<10; m++) 	
   {
		for (n=1; n<m; n++)
		{
	     cout<<setw(4)<<m * n; 	
    	}
	      cout<<endl;
   }
        return  0;
}

