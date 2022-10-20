#pragma once
/*
	miniMath
	���� �������㡢��������

*/


namespace mini {

	/*
		�������� ����
		���桢����˷�
	*/
	class Mat
	{
		int m, n; //m��n��
		double*_data; 
		Mat(int M, int N) :m(M), n(N) {
			_data = new double[M*N];
			for (int i = 0; i < M*N; i++) {
				_data[i] = 0;
			}
		}
		
		~Mat() {
			delete[]_data;
		}
		Mat operator/(const Mat& m);
	};

	Mat inverseMat(const Mat& m);
	Mat adjMat(const Mat& m);
	double detMat(const Mat& m,int M=0,int N=0);
	


	Mat inverseMat(const Mat& m)
	{

	}
}

