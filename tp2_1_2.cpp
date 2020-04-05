//============================================================================
// Name        : tp2.cpp
// Author      : Mauro Cabrera
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#define N  4
#define M  5

int main() {

	int f,c;
	double *pMatriz;
	double mt[N][M] = {
			{1, 2, 3, 4, 5},
			{6, 7, 8, 9, 10},
			{11, 12, 13, 14, 15},
			{16, 17, 18, 19, 20}
					};
	pMatriz = &mt[0][0];

	for(f = 0;f<N; f++){

		for(c = 0;c<M; c++) {
			printf("%lf ", *(pMatriz++));
		}
		printf("\n");
	}
	return 0;
}