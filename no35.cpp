#include<iostream>
using namespace std;
class Integer {
	int data;
public:
	Integer(){}
	Integer(int _data) { 
		data = _data; 
	}
	Integer operator =(const Integer src){
		data = src.data;
		return *this;
	}
	Integer operator++(){
		data++;
		return *this;
	}
	Integer operator++(int)	{
		const Integer old(*this);
		++(*this);
		return old;
	}
	friend ostream &operator<<(ostream &os, const Integer &src) {
		os << src.data;
		return os;
	}
	operator int() {
		return data;
	}
	friend Integer operator +(Integer a, Integer b);
};
Integer operator +(Integer a, Integer b)
{
	return Integer(a.data + b.data);
}
int main() {
	Integer a = 4, b = a, c;
	c = a + b++;
	int i = a;
	cout << a << b << c;
//	system("pause");
	return 0;
}

