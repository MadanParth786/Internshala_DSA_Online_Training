#include<iostream>
using namespace std;
int main(void)
{
	int arr[5];
	int sum=0;
	int avr;
	for(int i=0;i<5;i++){
		cin>>arr[i];
//	}
//	for(int i=0;i<5;i++){
		sum+=arr[i];
	    avr=sum/5;
		
	}
	cout<<sum<<"\n";
	cout<<avr<<"\n";
}
