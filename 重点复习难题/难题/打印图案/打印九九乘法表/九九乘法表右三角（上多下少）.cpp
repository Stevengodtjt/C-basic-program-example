#include <iostream>
#include<iomanip>
using namespace std;
int main()
{ 
	 int  m=0, n=0;
	 for (m=1; m<10; m++)    //��һ�� 
		{ cout<<setw(4)<<m;  }  //��ӡ��ͷ  
	     cout<<endl;

	 for (m=1; m<10; m++)     //�ڶ����ַ��������ո񣩶��� 
		 {cout<<"   -";} 
		 cout<<endl;

   for (m=1; m<10; m++) 	//mΪ�У�nΪ�� 
   {
		for (n=1; n<=10-m; n++)
		{
	     cout<<setw(4)<<m * n; 	
    	}
	      cout<<endl;
   }
        return  0;
}

