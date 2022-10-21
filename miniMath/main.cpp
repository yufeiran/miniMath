#include"miniMath.h"
#include<iostream>
using namespace std;

using namespace mini;


int main()
{
	Mat A(3, 3);
	A.d(0, 0) = 2; A.d(0, 1) =1; A.d(0, 2) = 3;
	A.d(1, 0) = 1; A.d(1, 1) = -1; A.d(1, 2) = 1;
	A.d(2, 0) = 1; A.d(2, 1) = 4; A.d(2, 2) = -2;

	cout << A;
	cout << "det(A)=" << detMat(A) << endl;

	cout << "adj(A)=" << endl;
	cout << adjMat(A) << endl;

	cout << "A-1=" << endl;
	cout << inverseMat(A) << endl;

	return 0;
}