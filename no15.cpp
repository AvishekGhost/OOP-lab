#include <iostream>

using namespace std;

void three(int a ,int b , int c){
	int n;
	if(a > b){
		if(a>c)
			n = a;	 
		else
			n = c;
	}else{
		if(b > c)
			n = b;
		else
			n = c;
	}
	cout << "Biggest of 3 is " << n << endl;
}

void all(int arr[],int no){
	int max;
	max = arr[0];
	for (int i = 1; i < no; i++)
        	if (arr[i] > max)
           	 max = arr[i];
	cout << "max element is : "<< max; 
}
int main(){
	int choice= 0;
	cout<< "enter 1 for question #a, 2 for question #b :" ; cin >> choice ;
	switch(choice){
		case 1:
			int a,b,c;
			cout<<"enter 3 digits: "; cin >> a >> b >> c;
			three(a,b,c);
			break;
		case 2:
			int arr[100],no;
			cout << "enter the no of elemets : "; cin >> no;
			cout<<"Enter the arry :";
			for(int i = 0;i<no;i++){
				cin >> arr[i];
			}
			all(arr,no);
			break;
	}
cout<< endl;
return 0 ;
}
