#include<iostream>
using namespace std;
struct student{
	int r_no;
	int marks;
};
struct student stu;
struct student *pt;   //pointer to the structure
int main(void)
{
	pt=&stu; 
   	cout<<"Student Detail of "<<" "<<"Student is: "<<"\n";
   	cin>>pt->r_no;
   	cout<<"Roll No: "<<stu.r_no<<"\n";
   	cin>>pt->marks;
   	cout<<"Marks: "<<stu.marks<<"\n";
   	
   }

