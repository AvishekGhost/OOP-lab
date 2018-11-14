#include<iostream>
using namespace std;
class INT { 
        int i; 
    public : 
        INT(){};
        INT(int a):i(a){}
        ~INT() {}
        INT operator++(){
            ++i;
            return *this;
        }
        INT operator++(int){
            INT temp;
            temp.i=i;
            ++temp.i;
            return *this;
        }
        int operator=(const INT src){
            return (src.i);
        }
        operator int(){
            return i;
        }
};
int main() { 
    int x = 3;
    INT y = x; 
    y++ = ++y;
    x = y;
    return 0;
}

