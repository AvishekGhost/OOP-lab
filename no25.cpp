#include <iostream>
using namespace std;

class complex
{
  float real,img;
  public :
  void setReal(float x)
  { 
   real=x;
  }
  void setImg(float y)
  {
   img=y;
  }
  void getReal();
  void getImg();
  
  void display()
  {
   cout<<real<<"+ j"<<img<<endl;
  }
 
  complex sum(complex &y);
};
void complex ::getReal()
{
 cout<<"Enter the real part :";
 cin>>real;
 }
void complex ::getImg()
{
  cout<<"Enter the imginary part :";
  cin>>img;
}
complex complex ::sum(complex & y)
{
 complex temp ;
 temp.real=real+y.real;
 temp.img=img+y.img ;
 return temp;
}
int main()
{
   complex x,y,z ;
   x.getReal();
   x.getImg();
   y.getReal();
   y.getImg();
   z=x.sum(y);
  
   x.display();
   y.display();
   cout<<"sum=";
   z.display();
} 

