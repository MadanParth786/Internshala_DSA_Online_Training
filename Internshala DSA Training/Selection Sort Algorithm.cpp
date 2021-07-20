#include<iostream>
using namespace std;
void selectionsort(int a[],int n)
{
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		int temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

int main(void)
{
	int n;
	cout<<"Enter the size of array: "<<"\n";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Apllying selection sort: "<<"\n";
	cout<<"Sorted Array: "<<"\n";
	selectionsort(arr,n);
}

