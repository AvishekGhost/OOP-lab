#include<iostream>
#include<math.h>
using namespace std ;

class point 
{
  float x,y,z;
  public :
   point() {};
   point(float a,float b,float c)
   {
     x=a;
     y=b;
     z=c;
   }
  
   double distance(point &temp);
   void display(void);
};

void point:: display(void)
{ 
  cout<<x<<','<<y<<','<<z;
 
} 


double point:: distance(point &temp)
{
  double dist;
  float x1=(x-temp.x);
  float y1=(y-temp.y);
  float z1=(z-temp.z);

  dist=sqrt(x1*x1+y1*y1+z1*z1);
  return dist;
}

int main()
{
  point a(3.6,5.4,6.9) ;
  point b(4.3,9.7,-2.1);


  cout<<"Here two points are :: "<<endl;
  cout<<"1st point ::(" ;
  a.display();
  cout<<')' <<endl ;
  cout<<"2nd point :: (" ;
  b.display() ;
  cout<<')'<<endl ;

  double dis;
  dis=a.distance(b);
  
  cout<< "Distance between two point =" << dis <<endl ;
  
  return 0; 
}
