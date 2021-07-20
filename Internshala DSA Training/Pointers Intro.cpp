#include<iostream>
using namespace std;
int main(void)
{
	int *pt;
	int n=500;
	pt=&n;
	float *fp;
	float a=150.22;
	fp=&a;
	cout<<"Address of int n:"<<pt<<"\n";
	cout<<"Address of float a:"<<fp<<"\n";
}
