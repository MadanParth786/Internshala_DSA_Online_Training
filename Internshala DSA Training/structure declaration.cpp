#include<iostream>
using namespace std;
struct student{
	int r_no;
	int marks;
};
struct student stu;
int main(void)
{
   for(int i=1;i<=5;i++){
   	cout<<"Student Detail of "<<i<<" "<<"Student is: "<<"\n";
   	cin>>stu.r_no;
   	cout<<"Roll No: "<<stu.r_no<<"\n";
   	cin>>stu.marks;
   	cout<<"Marks: "<<stu.marks<<"\n";
   	
   }
}
