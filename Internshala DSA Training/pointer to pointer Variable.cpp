#include<iostream>
using namespace std;
int main(void)
{
	int *pt;
	int n=500;
	pt=&n;
	int **ptt;
	ptt=&pt;
	cout<<"Address of n: "<<pt<<"\n";
	cout<<"Address of pointer pt: "<<ptt<<"\n";
	
}
