#include<iostream>
#include<string.h>
#include<cstdlib>
#include<math.h>
using namespace std;
class Complex {
	double img, real;
public:
	Complex(double real, double img) {
		this->img = img;
		this->real = real;
	}
	double getMod() {
		return (pow(img, 2) + pow(real, 2));
	}
	friend ostream& operator<<(ostream &os,const Complex &src) {
		os << src.real << " + i" << src.img;
		return os;
	}
};
template<typename T>
T max_number(T a, T b) {
	return (a > b) ? a : b;
}
template<typename S>
S max_string(S a, S b)
{
	int t;
	t = strcmp(a, b);
	if (t > 0)
		return a;
	else
		return b;
}
int main() {
	double val;
	int a = -99, b = -1;
	cout << "Maxmimum of " << a << " and " << b << " is ::" << max_number(a, b) << endl;
	Complex complex1(1, 5), complex2(-4, 8);
	cout << "Maximum of (" << complex1 << ") and ("
		<< complex2 << ") is ::";
	val = max_number(complex1.getMod(), complex2.getMod());
	if (val == complex1.getMod()) cout << complex1 << endl;
	else cout << complex2 << endl;
	char sa[4] = "ABC", sb[4] = "abc";
	cout << "Maxmimum of '" << sa << "' and '" << sb << "' is ::" << max_string(sa, sb) << endl;
	
//	system("pause");
	return 0;
}

