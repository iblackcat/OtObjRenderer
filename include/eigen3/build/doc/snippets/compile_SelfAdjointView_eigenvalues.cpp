#include <Eigen/Dense>
#include <iostream>

using namespace Eigen;
using namespace std;

int main(int, char**)
{
  cout.precision(3);
  MatrixXd ones = MatrixXd::Ones(3,3);
VectorXd eivals = ones.selfadjointView<Lower>().eigenvalues();
cout << "The eigenvalues of the 3x3 matrix of ones are:" << endl << eivals << endl;

  return 0;
}
