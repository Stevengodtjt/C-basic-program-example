#include<iostream>
using namespace std;
int main()
{   int i,j,row=0,col=0,min;       //row��¼��Сֵ���кţ�col��¼�к� 
    int a[3][3]={1,-2,0,4,-5,6,2,4}; //�����ʼ��
	min=a[0][0];                    //ָ����Сֵ
	for(i=0;i<3;i++)
	{  for(j=0;j<3;j++)            //˫��ѭ���������� 
	      { if(a[i][j]<min)
	        { min=a[i][j];
	          row=i;
	          col=j;
	        }
	      }
	} 
	cout<<"a�������СԪ����:a["<<row<<"]["<<col<<"]="<<min<<endl;
	return 0; 
}
