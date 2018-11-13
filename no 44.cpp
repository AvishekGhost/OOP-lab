// no 44 

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
    double getArea();
};

class ThreeDShape : Shape{
public:
	double getArea();
	double getVolume();
};

class Sphere : ThreeDShape {
    double r;
public:
    Sphere(double r){ this->r = r; }
    double getArea(){ return (PI * r * r *r); }
    double getVolume(){ return (r); }    
};
class Cube : ThreeDShape {
    double h;
public:
    Cube(double h){ this->h = h; }
    double getArea(){ return (h*h*h); }
    double getVolume(){ return (h); }
};

class Circle : public TwoDShape {
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
	double h,w;
public:
    Triangle(double h, double w){
        this->h = h;
        this->w = w;
    }
    double getArea(){ return (h*w); }
};
class Ellipse : TwoDShape {
    double m,n;
public:
    Ellipse(double m,double n){
        this-> m = m;
        this->n = n;
    }
    double getArea(){
        return (m*n);
    }
};

int main(){
    Circle circle(2);
    LOG(circle.getArea());
    return 0;
}

