#include <iostream>
 
using namespace std;

inline int add(int x, int y, int z) {
   return (x+y+z);
}

int main(){
	int x,y,z;
	cout << "enter 3 nos : ";
	cin >> x >> y >> z;
	int sum = add(x,y,z);
	cout << sum << endl;	
}

