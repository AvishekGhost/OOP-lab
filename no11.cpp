#include<iostream>

using namespace std;

void fact(int n, int *f){
    for (int i = 1; i <= n; i++) {
        *f = *f*i;
    }
}

int main() {

    int n, f = 1;
    cout << "Enter a Number :";
    cin>>n;

    fact(n, &f);

    cout << "Factorial is :" << f << endl;

    return 0;
}

