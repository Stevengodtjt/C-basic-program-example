#include<iostream>
using namespace std;
struct student
{  int num,age;
};
int main()
{ int t;
 student stu[3]={{1001,20},{1002,19},{1003,21}};
 student *p=stu;
 t=(++p)->num;
 cout<<t;
 return 0;
}
