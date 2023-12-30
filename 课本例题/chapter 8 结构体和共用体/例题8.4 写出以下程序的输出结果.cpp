#include<iostream>
using namespace std;
struct code
{	int i;
	char c;
}a[ ]={{100,'A'},{200,'B'},{300,'C'},{400,'D'}};
int main()
{	code *p=a;		//A
	cout<<++p->i<<'\t';	//B
	cout<<(++p)->c<<'\t';	//C
	cout<<(p++)->i<<'\t';	//D
	cout<<++p->c<<'\t';	//E
	cout<<p->i++<<'\t';		//F
	cout<<p->i<<endl;		//G
	return 0;
}

