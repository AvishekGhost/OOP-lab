#include<iostream>

#define PI 3.14
#define LOG(x) std::cout<< x << std::endl

using namespace std;

class Shape{
public:
	virtual double getArea() = 0;
	virtual double getVolume() = 0;
};

class TwoDShape: Shape{
public:
	virtual double getArea() = 0;
};

class ThreeDShape : Shape{
public:
	virtual double getArea() = 0;
	virtual double getVolume() = 0;
};

class Sphere : ThreeDShape {};
class Cube : ThreeDShape {};

class Circle : TwoDShape {
	double r;
public:
	Circle(double r){
		this->r = r;
	}
	double getArea(){
		return (PI * r * r);
	}
};
class Triangle : TwoDShape {
	
};
class Ellipse : TwoDShape {};

int main(){

        return 0;
}

