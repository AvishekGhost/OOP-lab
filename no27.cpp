#include<iostream>

using namespace std;

class Queue {
	int *data;            
	int front, rear,size;

public :
  	Queue(int a);      	
	void add(int num);    
      	int remove();
	void display();           
};

Queue::Queue(int a){
	data=new int[a];
	front=rear=0;
	size=a;
}

void Queue::add(int a){
	int b;
	b=(rear+1)%size;
	if(b==front)
	{
	 cout<<"Queue is full !"<<endl;
	 return;
	}
	data[b]=a;
	rear=b;
}

int Queue::remove(){
	if(front==rear)
	{
	 return -1;
	}
	front=(front+1)%size;
	return data[front];
}

void Queue::display(){
	int count;
	count=front;
	while(count!=rear)
	{
	  count=(count+1)%size;
	  cout<<data[count]<<" ";
	}
	cout << endl;
}

int main(){
	int choice=0,size,val;
	cout<< "Enter the size of the Queue :"; cin>>size;
	Queue a(size);

	do{
		cout<< "1. To EnQUEUE\n2. To DeQUEUE\n3. To DISPLAY\n4. To EXIT\nEnter a NUMBER : "; cin >> choice;
		
		switch(choice){
			case 1:
				cout<< "Enter a no to EnQueue : "; cin >> val;
				a.add(val);
				break;
			case 2:
				a.remove();
				break;
			case 3: 
				a.display();
				break;
		} 
 		
	}while(choice != 4);
}
