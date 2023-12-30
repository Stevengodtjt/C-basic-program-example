#include<iostream>
using namespace std;
struct student
{   int id;
    int score;
    student *next;
}; 
student *create()
{   student *head=NULL,*p1,*p2;
    p1=new student;               //建立第一个结点
	cout<<"请输入学生的学号和成绩(输入0结束):";
	cin>>p1->id>>p1->score;       //输入结点数据
	while(p1->id!=0)              //建立的结点有效
	{  if(head==NULL)             //如果建立的结点是头结点
	    head=p1;                  //赋值链表头指针
		else 
		  p2->next=p1;            // 如果不是头结点，将p1结点与p2结点连接起来
		  p2=p1;
		  p1=new student;         //继续建立新的结点
		  cout<<"请输入学生的学号与成绩（输入0结束）:";
		  cin>>p1->id>>p1->score; 
	} 
	p2->next=NULL;               //建立完全部结点，设置链表结束标志
	return head;                 //返回新建链表头指针 
}

void print(student *head)          //输出链表全部结点的内容 
{   student *p=head;
    while(p!=NULL)                              //当结点地址不为0 
    {   cout<<p->id<<'\t'<<p->score<<endl;      //输入当前结点数据 
        p=p->next;                              //指针指向下一个结点 
    }
}

student *del(student *head,int x)            //删除链表中指定的结点
{  student *p1,*p2;
   p1=head;                                  //p1指向表头
   if(head==NULL)                            //特殊情况，如果链表为空链表
   {   cout<<"NULL List\n";                  //输出提示信息
       return head;                          //返回空链表表头 
   } 
   while(p1->id!=x&&p1->next!=NULL)          //沿链表节点依次查找指定节点
   {   p2=p1;
       p1=p1->next;
   } 
   if(p1->id==x)                               //如果找到指定的结点
   {  if(p1==head)                             //特殊情况，指定的结点为头指针
      head=head->next;                         //头指针向后移动一个结点
	  else                                     // 指定结点不是头结点 
	    p2->next=p1->next;                     //将后一结点地址赋给前一结点的地址成员 
	    delete p1;
   } 
   else                                        //遍历列表，未找到指定结点 
      cout<<"Not Found node number:"<<x<<endl;     //输出提示信息
	  return head; 
} 

student *insert(student *head,student *p0)      //在链表中插入一个结点
{   student *p1,*p2;
    if(head==NULL)                              //特殊情况，当链表为空链表，插入的结点成为链表唯一结点 
	{head=p0; head->next=0;  return head;}
	p1=head;
	while(p1->id<p0->id&&p1->next!=NULL)         //寻找插入点
	{   p2=p1;
	    p1=p1->next;
	} 
	if(p1->id>p0->id)                            //找到插入点
	{   if(p1==head)                             //特殊情况，插入点在头指针前 
	     {  p0->next=head;                       
	        head=p0;                              //插入的结点作为链表头指针 
	     }
	     else                                     //p0结点插在p1和p2结点之间 
	     {  p0->next=p1;
	        p2->next=p0;
	     }
	} 
	else                                          //链表的结点之间没有插入点，p0结点应插入在链表尾部
	{   p1->next=p0;
	    p0->next=NULL;                            //p0结点作为链表尾部 
	} 
	return head;
}

int main()
{   student *head,*p0;
    int x,score;
    head=create();                                //建立链表
	print(head);                                  //输出链表
	cout<<"请输入要删除的结点的id:";
	cin>>x;
	while(x!=0)                                    //可删除多个结点 
	{   head=del(head,x);
	    print(head);
	    cout<<"请输入要删除的结点的id:";
		cin>>x; 
	} 
	cout<<"请输入要插入的结点的id和score:";
	cin>>x>>score;
	while(x)
	{   p0=new student;
	    p0->id=x;
	    p0->score=score;
	    head=insert(head,p0);
	    print(head);
	    cout<<"请输入要插入的结点和id和score:";
		cin>>x>>score; 
	} 
	print(head);
	return 0;
    
}


 
