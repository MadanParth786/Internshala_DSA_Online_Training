// Bubble sort implementation:
#include<iostream>
using namespace std;
void bubblesort(int a[],int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<n-i;j++){
			if(a[j]<a[j+1]){
				int temp =a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}	
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
}

int main(void)
{
	 int arr[5];
	 for(int i=1;i<=5;i++){
	 	cin>>arr[i];
	 }
	 cout<<"Applying Bubble Sort Algorithm: "<<"\n";
	 cout<<"Sorted Array:"<<"\n";
	 bubblesort(arr,5);
}
