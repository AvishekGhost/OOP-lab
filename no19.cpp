#include<iostream>

using namespace std;

class rectangle{
	double width,length;
public:
	rectangle(){};
	rectangle(double a,double b){
		width = a;
		length = b;
	}
	void display();
	double area();
};

void rectangle::display(){
	cout<< "Length="<<length<<endl;
	cout<< "width="<<width<<endl;
}

double rectangle::area(){
	return(width*length);
}

int main(){
	int i=0;
	rectangle r[4];
	double w,l;
	for(i =0;i<4;i++){
		cout<<"Enter no "<<i+1<< "width and height :";
		cin >> w >> l;
		r[i]=rectangle(w,l);
	}
	double temp;
	for(i =0;i<4;i++){
   		cout<<"NO:"<<i+1<<endl;
   		r[i].display();
   		temp=r[i].area();
   		cout<<"Area="<<temp<<endl ;
  	}
}

