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
template <class T>
class Stack_t
{
	T *buffer;
	int top;
public:
	Stack_t() {}
	Stack_t(int n) {
		buffer = new T[n];
		top = -1;
	}
	void push(T num) {
		top++;
		buffer[top] = num;
		cout << num << " is pushed to stack\n";
	}
	T pop() {
		int temp_top = 0;
		if (top == -1) {
			cout << "Stack is empty\n";
			//return top;
		}
		T temp;
		temp = buffer[top];
		top--;
		temp_top = top;
		cout << buffer[++temp_top] << " Poped" << endl;
		return temp;
	}
	friend ostream& operator<<(ostream &os, const Stack_t &src) {
		for (int i = 0; i < src.top + 1; i++)
			os << src.buffer[i] << " ";
		return os;
	}
	
};
int main() {
	cout << "Creating a atack of 3 INT type items-----" << endl;
	Stack_t<int> int_stack(3);
	int_stack.push(1);
	int_stack.push(5);
	int_stack.push(-8);
	
	cout << "now stack-" << endl << int_stack << endl;
	int_stack.pop();
	cout << "now stack-" << endl << int_stack << endl;
	cout << "Creating a atack of 3 complex type items-----" << endl;
	Stack_t<Complex> complex_stack(3);
	Complex no1(1, -1) , no2(8, 8), no3(4, -1);
	complex_stack.push(no1);
	complex_stack.push(no2);
	complex_stack.push(no3);
	cout << "now stack-" << endl << complex_stack << endl;
	complex_stack.pop();
	cout << "now stack-" << endl << complex_stack << endl;
//	system("pause");
	return 0;
}

