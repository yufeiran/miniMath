#pragma once
/*
	miniMath
	包含 向量运算、矩阵运算

*/


namespace mini {

	/*
		矩阵运算 包含
		求逆、矩阵乘法
	*/
	class Mat
	{
		int m, n; //m行n列
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

