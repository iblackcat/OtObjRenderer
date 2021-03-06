#include <Eigen/Dense>
#include <iostream>

using namespace Eigen;
using namespace std;

int main(int, char**)
{
  cout.precision(3);
  Matrix3f A = Matrix3f::Random(3,3), B;
B << 0,1,0,  
     0,0,1,  
     1,0,0;
cout << "At start, A = " << endl << A << endl;
A.applyOnTheLeft(B); 
cout << "After applyOnTheLeft, A = " << endl << A << endl;

  return 0;
}
