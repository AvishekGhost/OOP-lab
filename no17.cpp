#include<iostream>

using namespace std;
int add(int n1,int n2=0,int n3=0){
	return n1+n2+n3;
}
int main(){
	int n1,n2,n3;
	cout<<"Enter 3 no: ";
	cin>>n1>>n2>>n3;
	
	int sum1=add(n1);
	cout<< "1st sum="<<sum1<<endl;
	
	cout<< "2nd sum="<<add(n1,n2)<<endl;

	int sum3 = add(n1,n2,n3);
	cout<<"3rd sum="<<sum3<<endl;
	return 0;
	  
}
