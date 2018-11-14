#include <iostream>

using namespace std;

void swap(int &a,int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main(){
	int a, b;
	cout << "Enter A: " ;cin >> a;
	cout << "Enter B: " ;cin >> b;
	swap(a,b);
	cout << a <<","<< b << endl;
	return 0;
	
}
