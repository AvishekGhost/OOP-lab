#include<iostream>
#include<math.h>

using namespace std;

class point 
{
	double x,y;
	public:
		point(){}
		point(double x,double y){
			this->x=x;
			this->y=y; 
		}
		
		double operator - (const point &temp);
		void print();
};

void point::print()
{
	cout<<'('<<x<<','<<y<<')'<<endl;
}

double point :: operator -(const point &temp)
{
	double x1,y1;
	x1=x-temp.x;
	y1=y-temp.y;
	return sqrt(x1*x1 + y1*y1);
}

int main()
{
	point a(2.6,5.4);
	point b(3.9,8.8);

	cout<<"1st point : " ; a.print();
	cout<<"2nd point : " ; b.print();

	cout<<"Distance between two points = ";
	double dis ;
	dis=a-b;
	cout<< dis <<endl;
	return 0;
} 
