
#include<iostream>
using namespace std;
class Index {
	int data;
public:
	Index() {}
	Index(int a) {
		data = a;
	}
	operator int() {
		return data;
	}
	friend Index operator+(Index, Index);
	int operator=(Index src) {
		return src.data;
	}
	friend class Integer;
};
Index operator+(Index src1, Index src2){
	return Index(src1.data + src2.data);
}
class Integer {
	int data;
public:
	Integer() {}
	Integer(int a) { data = a; }
	int operator=(Index src) {
		return src.data;
	}
	
};
int main() {
	Index in(4), out(10);
	int x = in;
	int y = in + out;
	in = 2;
	Integer i;
	i = in;
//	system("pause");
	return 0;
}

