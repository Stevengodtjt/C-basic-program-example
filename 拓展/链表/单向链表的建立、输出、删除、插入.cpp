#include<iostream>
using namespace std;
struct student
{   int id;
    int score;
    student *next;
}; 
student *create()
{   student *head=NULL,*p1,*p2;
    p1=new student;               //������һ�����
	cout<<"������ѧ����ѧ�źͳɼ�(����0����):";
	cin>>p1->id>>p1->score;       //����������
	while(p1->id!=0)              //�����Ľ����Ч
	{  if(head==NULL)             //��������Ľ����ͷ���
	    head=p1;                  //��ֵ����ͷָ��
		else 
		  p2->next=p1;            // �������ͷ��㣬��p1�����p2�����������
		  p2=p1;
		  p1=new student;         //���������µĽ��
		  cout<<"������ѧ����ѧ����ɼ�������0������:";
		  cin>>p1->id>>p1->score; 
	} 
	p2->next=NULL;               //������ȫ����㣬�������������־
	return head;                 //�����½�����ͷָ�� 
}

void print(student *head)          //�������ȫ���������� 
{   student *p=head;
    while(p!=NULL)                              //������ַ��Ϊ0 
    {   cout<<p->id<<'\t'<<p->score<<endl;      //���뵱ǰ������� 
        p=p->next;                              //ָ��ָ����һ����� 
    }
}

student *del(student *head,int x)            //ɾ��������ָ���Ľ��
{  student *p1,*p2;
   p1=head;                                  //p1ָ���ͷ
   if(head==NULL)                            //����������������Ϊ������
   {   cout<<"NULL List\n";                  //�����ʾ��Ϣ
       return head;                          //���ؿ������ͷ 
   } 
   while(p1->id!=x&&p1->next!=NULL)          //������ڵ����β���ָ���ڵ�
   {   p2=p1;
       p1=p1->next;
   } 
   if(p1->id==x)                               //����ҵ�ָ���Ľ��
   {  if(p1==head)                             //���������ָ���Ľ��Ϊͷָ��
      head=head->next;                         //ͷָ������ƶ�һ�����
	  else                                     // ָ����㲻��ͷ��� 
	    p2->next=p1->next;                     //����һ����ַ����ǰһ���ĵ�ַ��Ա 
	    delete p1;
   } 
   else                                        //�����б�δ�ҵ�ָ����� 
      cout<<"Not Found node number:"<<x<<endl;     //�����ʾ��Ϣ
	  return head; 
} 

student *insert(student *head,student *p0)      //�������в���һ�����
{   student *p1,*p2;
    if(head==NULL)                              //���������������Ϊ����������Ľ���Ϊ����Ψһ��� 
	{head=p0; head->next=0;  return head;}
	p1=head;
	while(p1->id<p0->id&&p1->next!=NULL)         //Ѱ�Ҳ����
	{   p2=p1;
	    p1=p1->next;
	} 
	if(p1->id>p0->id)                            //�ҵ������
	{   if(p1==head)                             //����������������ͷָ��ǰ 
	     {  p0->next=head;                       
	        head=p0;                              //����Ľ����Ϊ����ͷָ�� 
	     }
	     else                                     //p0������p1��p2���֮�� 
	     {  p0->next=p1;
	        p2->next=p0;
	     }
	} 
	else                                          //����Ľ��֮��û�в���㣬p0���Ӧ����������β��
	{   p1->next=p0;
	    p0->next=NULL;                            //p0�����Ϊ����β�� 
	} 
	return head;
}

int main()
{   student *head,*p0;
    int x,score;
    head=create();                                //��������
	print(head);                                  //�������
	cout<<"������Ҫɾ���Ľ���id:";
	cin>>x;
	while(x!=0)                                    //��ɾ�������� 
	{   head=del(head,x);
	    print(head);
	    cout<<"������Ҫɾ���Ľ���id:";
		cin>>x; 
	} 
	cout<<"������Ҫ����Ľ���id��score:";
	cin>>x>>score;
	while(x)
	{   p0=new student;
	    p0->id=x;
	    p0->score=score;
	    head=insert(head,p0);
	    print(head);
	    cout<<"������Ҫ����Ľ���id��score:";
		cin>>x>>score; 
	} 
	print(head);
	return 0;
    
}


 
