#include<iostream>
using namespace std;
int bs(int a[],int n,int s){
	int l=0;
	int h=n-1;
	while(l<=h){
		int mid=l+(h-l)/2;
		if(a[mid]==s){
			return mid;
		}
		else if(a[mid]<s){
			l=mid+1;
		}
		else{
			h=mid-1;
		}
	}
	return -1;
	
}
int main(void){
	int arr[10];
	int se=100;
	for(int i=0;i<10;i++){
		cin>>arr[i];
  }
  cout<<"Binary Search found at index:"<<bs(arr,10,se);
  
}
