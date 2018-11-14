#include <iostream>

using namespace std;

int main(){
	float f;
	for(int c = 0; c < 101; c++){
		cout << "At " << c << " C ,F is : " << (c*9.0)/5.0 + 32 << endl;
	}
	return 0;
}
