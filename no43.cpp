#include<iostream>

#define PI 3.14
#define LOG(x) std::cout << x << std::endl

using namespace std;

class Shape2D{

public:
	Shape2D(){}
	virtual double area() = 0;
	virtual double perimeter() = 0;
};

class Circle: public Shape2D {
	double r;
public:
	Circle(){}
	Circle(double _r){
		r = _r;
	}

	double area(){
		double area =  PI * r * r;
		return area;
	}
	double perimeter(){
		return (2 * PI * r);
	}

};

class Rectangle : public Shape2D {
	double h,w;
public:
	Rectangle(){}
	Rectangle(double _h, double _w){
		h = _h;
		w = _w;
	}

	double area(){
		return (h*w);
	}
	double perimeter(){
		return (2*(h+w));
	}

};

int main(){
	Circle circle(5);
	LOG("Area of Circle : "); LOG(circle.area());
	LOG("perimeter of Circle : "); LOG(circle.perimeter());
	Rectangle rectangle(2,2);
	LOG("Area of Rectangle : "); LOG( rectangle.area());
	LOG("perimeter of Rectangle : "); LOG( rectangle.perimeter());

	Shape2D *ptr[5];

	Circle c1(4),c2(6),c3(8);
	Rectangle r1(4,4),r2(4,6);

	ptr[0]= &c1;
	ptr[1]= &c2;
	ptr[2]= &c3;
	ptr[3]= &r1;
	ptr[4]= &r2;

	for (int i = 0; i < 3; ++i)
	{
		LOG("Area of Circle : ");
		LOG(ptr[i]->area());
		LOG("perimeter of Circle : ");
		LOG(ptr[i]->perimeter());
	}
	for (int i = 3; i < 5; ++i)
	{
		LOG("Area of Rectangle : "); LOG( ptr[i]->area());
		LOG("perimeter of Rectangle : "); LOG( ptr[i]->perimeter());
		
	}
	return 0;
}
