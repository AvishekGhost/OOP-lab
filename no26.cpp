#include<iostream>

using namespace std;

class stack{
	int *buffer,top;
public:
	stack(){};
	stack(int n);
	void push(int num);
	int pop();
	void display();	
};

stack::stack(int n){
	buffer=new int[n];
	top=-1;
	cout<<"stack of size "<<n<<" created"<<endl;
}

void stack::push(int num){
	top++;
	buffer[top]=num;
}

int stack::pop(){
	if(top==-1)
 	 return top;
	int temp;
	temp=buffer[top];
	top--;
        return temp;
}

void stack::display(){
	cout<<"STACK :: ";
	for(int i=0;i<=top;i++)
		cout<<buffer[i]<<" ";
}

int main(){
	int choice=0,size,val;
	cout << "enter the size of the stack :"; cin>>size; stack a(size);
	do{
		cout<<"1. For PUSH\n2. For POP\n3. For DISPLAY\n4. FOR exit\nEnter a number : ";
		cin >> choice;
		switch(choice){
			case 1:
				cout<<"Enter a number u want to push : "; cin >> val;
				a.push(val);	
				break;
			case 2:
				a.pop();
				cout<<"POP complete\n";
				break;
			case 3:
				a.display();
				break;
		}
	}while(choice!=4);
	
}
