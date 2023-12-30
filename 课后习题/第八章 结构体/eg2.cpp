#include<iostream>
using namespace std;
struct node
{  char ni;
    struct node *next;
};
int main()
{  node *head,* p;
   int n=48;
   head=NULL;
   do
   {  p=new node;
      p->ni=n%8+48;
      p->next=head;
      head=p;
      n=n/8;
   }while(n!=0);
   p=head;
   while(p!=NULL)
   {  cout<<p->ni;
      p=p->next;
   }
   return 0;
}


