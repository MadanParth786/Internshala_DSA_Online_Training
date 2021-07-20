#include<iostream>
using namespace std;
int main(void)
{
  int arr[5];
   int highest;
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	highest =arr[0];	
	for(int i=1;i<=5;i++){
	 if(arr[i]>highest){
	 	highest=arr[i];
	 }
	 
}
 cout<<highest<<"\n";

}
