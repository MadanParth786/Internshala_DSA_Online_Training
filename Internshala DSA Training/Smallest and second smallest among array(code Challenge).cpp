//Code challenge Module3
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin>>n;
    float a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
	sort(a,a+n);
	cout<<"Smallest Element: "<<setprecision(1)<<fixed<<a[0]<<"\n";
	cout<<"Second Smallest Element: "<<setprecision(1)<<fixed<<a[1]<<"\n";
}
