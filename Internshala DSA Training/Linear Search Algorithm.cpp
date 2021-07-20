#include<iostream>
using namespace std;
int main(void)
{
	int a[10];
	int s=100;
	for(int i=0;i<10;i++){
		cin>>a[i];
		if(s==a[i]){
			cout<<"Search Found at index:"<<i<<"\n";
			break;
         }
	}
}
