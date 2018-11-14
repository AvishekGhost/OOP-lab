#include <iostream>

using namespace std;

int fn(int f){
	cout<< "enter the no :"; 
	cin >> f;
	for(int i=1;i<=f;i++){
		f=f*i;
	}
	return f;
}
int main(){
	int f;
	fn(f);
	cout << "ans is " << f;
	return 0;
}	
