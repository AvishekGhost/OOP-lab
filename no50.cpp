#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
class Complex {
	double img, real;
public:
	Complex() {}
	Complex(double real, double img) {
		this->img = img;
		this->real = real;
	}
	double getMod() {
		return (pow(img, 2) + pow(real, 2));
	}
	friend ostream& operator<<(ostream &os, const Complex &src) {
		os << src.real << " + i" << src.img;
		return os;
	}
};
class Stack
{
	int *buffer;
	int top;
public:
	Stack() {}
	Stack(int n) {
		buffer = new int[n];
		top = -1;
	}
	void push(int num){
		top++;
		buffer[top] = num;
		cout << num << " is pushed to stack\n";
	}
	int pop() {
		if (top == -1)
			return top;
		int temp;
		temp = buffer[top];
		top--;
		return temp;
	}
	friend ostream& operator<<(ostream &os, const Stack &src) {
		for (int i = 0; i < src.top+1; i++)
			os << src.buffer[i] << " ";
		return os;
	}
};
template<typename T>
void Swap(T &a, T &b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}
int main() {
	cout << "Swap of ints------\n";
	int a = -99, b = 4;
	cout << "Before Swap " << a << " , " << b << endl;
	Swap(a, b);
	cout << "After Swap " << a << " , " << b << endl;
	cout << "\nSwap of Complex no------\n";
	Complex c1(1, 2), c2(3, 4);
	cout << "Before Swap (" << c1 << ") , (" << c2 << ")" << endl;
	Swap(c1, c2);
	cout << "After Swap (" << c1 << ") , (" << c2 << ")" << endl;
	cout << "\nSwap of Stacks------\nCreating stack #1--\n" << endl;
	Stack s1(3), s2(5);
	s1.push(2);
	s1.push(3);
	s1.push(10);
	cout << "Creating stack #2--" << endl;
	s2.push(7);
	s2.push(4);
	s2.push(110);
	s2.push(77);
	s2.push(9);
	cout << "\nBefore Swap " << s1 << " , " << s2 << endl;
	Swap(s1, s2);
	cout << "After Swap " << s1 << " , " << s2 << endl;
//	system("pause");
	return 0;
}

