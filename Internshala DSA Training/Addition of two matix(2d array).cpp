#include<iostream>
using namespace std;
int main(void)
{
	int a[3][3],b[3][3],c[3][3];
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++){
		//	cout<<"First Matrix is: "<<"\n";
			cin>>a[i][j];
		//	cout<<"Second Matrix is: "<<"\n";
			cin>>b[i][j];
		}
	
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	cout<<"The Sum of two Matrix is : "<<"\n";
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++){
			cout<<c[i][j]<<"\t";
			
    }
    cout<<endl;
    
    
}

