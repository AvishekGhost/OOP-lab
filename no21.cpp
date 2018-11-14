#include<iostream>
#include<cmath>
 using namespace std;

 class Vector{
    int array[3];

public:
    Vector(int aPos1,int aPos2,int aPos3){
        array[0] = aPos1;
        array[1] = aPos2;
        array[2] = aPos3;
    }
    void addition(Vector a1, Vector a2){
        int tempArray[3];

        for(int i=0;i<3;i++){
            tempArray[i] = a1.array[i] + a2.array[i];
        }
            cout<< tempArray[0]<< "i + ";
            cout << tempArray[1]<< "j + ";
            cout << tempArray[2]<<"k "<< endl;   
    }
    void subtraction(Vector a1, Vector a2){
        int tempArray[3];

        for(int i=0;i<3;i++){
            tempArray[i] = a1.array[i] - a2.array[i];
        }
            cout<< tempArray[0]<< "i + ";
            cout << tempArray[1]<< "j + ";
            cout << tempArray[2]<<"k "<< endl;   
    }
    void equality(Vector a1, Vector a2){
        int tempArray[3],flag=0;
        for(int i=0;i<3;i++){
            if(a1.array[i] == a2.array[i]) flag++;
        }
        if (flag == 3) cout << "Vector is equal"<< endl;
        else cout << "Vector isnt equal" << endl;      
    }
    int lessAndGreater(Vector a1, Vector a2){
        float sum=0,mag1=0,mag2=0;
        for(int i=0;i<3;i++){
            sum = pow(a1.array[i], 2);
            mag1 = sqrt(sum + mag1);
        }
        for(int j=0;j<3;j++){
            sum = pow(a2.array[j], 2);
            mag2 = sqrt(sum + mag2);
        }

        if(mag2 > mag1) cout << "vector 2 > vector 1"<< endl;
        else if (mag2 == mag1) return 0;
        else cout << "vector 2 < vector 1"<< endl;
        
    }
 };

 int main(){
    Vector a1(2,2,2);
    Vector a2(2,2,2);

    a1.addition(a1,a2);
    a1.subtraction(a1,a2);
    a1.equality(a1,a2);
    a1.lessAndGreater(a1,a2);

    return 0;
}
