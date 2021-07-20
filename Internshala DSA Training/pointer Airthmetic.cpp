#include<iostream>
using namespace std;
int main(void)
{
	int *pt;
	int n=500;
	pt=&n;
	cout<<"Address of n: "<<pt<<" "<<"Value :"<<*pt<<"\n";
	pt++;   //Arithmetic pointer as int is of 4 byte so address increased by 4 byte;
	cout<<"Address of now n "<<pt<<" "<<"Value: "<<*pt<<"\n";
	
}
