#include<iostream>
#include<math.h>

using namespace std;

class Complex{
	float img;
	float real;
float data ;
public:
	Complex(float img,float real){
		this->img = img;
		this->real = real;
	}

	Complex operator+(const Complex &);
	Complex operator-(const Complex &);
	Complex operator*(const Complex &);
	Complex operator/(const Complex &);
	Complex operator=(const Complex &);

	void print(){
		cout << real <<"+ i"<<img  << endl;
	}
		
};

Complex Complex :: operator+(const Complex &source){
	Complex temp(img+source.img , real+source.real);
	return temp;
}

Complex Complex :: operator-(const Complex &source){
        Complex temp(img-source.img , real-source.real);
        return temp;
}

Complex Complex :: operator*(const Complex &source){
        Complex temp(img*source.img , real*source.real);
        return temp;
}

Complex Complex :: operator/(const Complex &source){
        Complex temp(img/source.img , real/source.real);
        return temp;
}


Complex Complex :: operator = (const Complex &source){
	Complex temp(source.img,source.real);
	return temp;
}

int main(){
	Complex a(8,4);
	Complex b(5,5);
	Complex c1 = a+b;
	cout <<"+ operator : " ;
	c1.print();
	Complex c2 = a-b;
	cout <<"- operator : " ;
	c2.print();
	Complex c3 = a*b;
	cout <<"* operator : " ;
	c3.print();
	Complex c4 = a/b;
	cout <<"/ operator : " ;
	c4.print();
	Complex c5 = c4;
	cout <<"= operator : " ;
	c5.print();
} 
