#include<iostream>
using namespace std;
class IntArray
{
  int size;
  int *a;
public:
    IntArray (int s)
  {
      a = new int[s];
    size = s;
  }
   ~IntArray ()
  {
  }
  int &operator[] (int i)
  {
    return a[i];
  }
  friend ostream & operator<< (ostream & os, IntArray & b)
  {
    
    for (int i = 0; i < b.size; i++)
      os << b.a[i] << " ";
    return os;
  }
};
int
main ()
{
  IntArray i (10);
  for (int k = 0; k < 10; k++)
    i[k] = k;
  cout << i;
  return 0;
}
