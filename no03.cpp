#include <iostream>

using namespace std;

void fact(int n){	
	int f=1;
	for(int j=1;j<=n;j++){
		f=f*j;
	}
	cout << n << "!= " << f << endl;
}	

int main(){
	int n,p=1;
	cout << "enter the end no of the factoruial taable: "; cin >> n;
	for(int i=1;i<=n;++i){
		fact(i);
	}
	
	return 0;
}
