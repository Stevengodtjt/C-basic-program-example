#include<iostream>
using namespace std;
int main()
{  int i,j,k;
   for(i=1;i<=4;i++)                              //������������
     {  for(j=1;j<=4-i;j++)                      //����*ǰ�Ŀո��� 
         {cout<<' ';}                            //���һ���ո� 
            for(k=1;k<=2*i-1;k++)                //����*�ĸ��� 
              {cout<<'*'; }                     //�����һ�к���
			     cout<<'\n'; 
    }
                  for(i=1;i<=3;i++)               //������������
			      {  for(j=1;j<=i;j++)           //����*ǰ�Ŀո��� 
			          {cout<<' '; }               //���һ���ո� 
			          for(k=1;k<=2*(3-i)+1;k++)   //����*�ĸ���		
					    {cout<<'*';}
					     cout<<'\n';
				  }              
	 
	  
	 return 0;
}
