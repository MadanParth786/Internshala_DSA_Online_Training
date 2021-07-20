// Queue implementation using c++:
#include<iostream>
using namespace std;
int queue[100], n=100, front=-1,rear=-1;

void insert(int val)
{
	if(rear==n-1){
		cout<<"***Queue Overflow***"<<"\n";
	}
	else{
		if(front==-1){
			front =0;
			cout<<"Value inserted in Queue: ";
			cin>>val;
			rear++;
			queue[rear]=val;
		}
	}
}

void deleted()
{
	if(front==-1 or front>rear){
		cout<<"***Queue Underflow***"<<"\n";
		return;
	}
	else{
		cout<<"Element to be deleted : "<<queue[front]<<"\n";
		front ++;
	}
}

void display(){
	if (front == - 1)
   cout<<"***Queue is empty***"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}




int main(void)
{
	cout<<"***Welcome To Queue Implementation***"<<"\n";
	cout<<"Menu are: "<<"\n";  
	cout<<"1> Insert in the Queue"<<"\n";
	cout<<"2> Delete from the Queue"<<"\n";
	cout<<"3> Display the Queue"<<"\n";
	cout<<"4> Exit"<<"\n";
	int ch,val;
    do{
		cout<<"Enter your Choice: ";
	    cin>>ch;
	    switch(ch){
	    	case 1:{
	    		insert(val);
				break;
			}
			case 2:{
				deleted();
				break;
			}
		    case 3:{
		    	display();
				break;
			}
			case 4:{
				cout<<"Exit"<<endl;
				break;
			}
			default:{
				cout<<"***Invalid Input By user***"<<"\n";
				break;
			}
		}
	
	}while(ch!=4);
}
