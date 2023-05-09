#include <iostream>
using namespace std;
#include "LOL.h"

void LOL::fn1(int N1, int N2) {
	int N = N2 - N1 + 1;
	nn = new int[N2 - N1 + 1];
	for (int i = 0, k = N1; i < N, k <= N2; i++, k++) {
		nn[i] = 0;
		for (int j = 0; j <= k; j++) {
			nn[i] += j;
		}
	}
}

void LOL::fn2(float a, float b, float x0, float dx, int m) {
	mm = new float[m];
	for (float x = x0, i = 0; x < x0 + dx * m, i < m; x += dx, i++) {
		mm[(int)i] = a * x + b;
	}
}