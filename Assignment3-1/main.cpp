#include <iostream>
#include <fstream>
using namespace std;
#include "LOL.h"

int main() {
	// ¹æ¹ý 1
	// 1) akali
	LOL akali;
	int N1 = 5, N2 = 10;
	float a = 2, b = 3, x0 = -5, dx = 0.1;
	int m = 10;
	akali.fn1(N1, N2);
	akali.fn2(a, b, x0, dx, m);

	ofstream aa("akali.dat", ios::binary | ios::out);
	aa.write((char*)&N1, sizeof(N1));
	aa.write((char*)&N2, sizeof(N2));
	aa.write((char*)&a, sizeof(a));
	aa.write((char*)&b, sizeof(b));
	aa.write((char*)&x0, sizeof(x0));
	aa.write((char*)&dx, sizeof(dx));
	aa.write((char*)&m, sizeof(m));
	aa.write((char*)akali.nn, 4 * (N2 - N1 + 1));
	aa.write((char*)akali.mm, 4 * m);
	aa.close();

	// 2) amumu
	LOL amumu;
	N1 = 7; N2 = 100;
	a = -3.5; b = 4; x0 = 100; dx = 10;
	m = 15;
	amumu.fn1(N1, N2);
	amumu.fn2(a, b, x0, dx, m);

	ofstream bb("amumu.dat", ios::binary | ios::out);
	bb.write((char*)&N1, sizeof(N1));
	bb.write((char*)&N2, sizeof(N2));
	bb.write((char*)&a, sizeof(a));
	bb.write((char*)&b, sizeof(b));
	bb.write((char*)&x0, sizeof(x0));
	bb.write((char*)&dx, sizeof(dx));
	bb.write((char*)&m, sizeof(m));
	bb.write((char*)akali.nn, 4 * (N2 - N1 + 1));
	bb.write((char*)akali.mm, 4 * m);
	bb.close();


	// 3) annie
	LOL annie;
	N1 = 12; N2 = 17;
	a = 0.01; b = 0.2; x0 = 1.5; dx = 0.08;
	m = 20;
	annie.fn1(N1, N2);
	annie.fn2(a, b, x0, dx, m);

	ofstream cc("annie.dat", ios::binary | ios::out);
	cc.write((char*)&N1, sizeof(N1));
	cc.write((char*)&N2, sizeof(N2));
	cc.write((char*)&a, sizeof(a));
	cc.write((char*)&b, sizeof(b));
	cc.write((char*)&x0, sizeof(x0));
	cc.write((char*)&dx, sizeof(dx));
	cc.write((char*)&m, sizeof(m));
	cc.write((char*)annie.nn, 4 * (N2 - N1 + 1));
	cc.write((char*)annie.mm, 4 * m);
	cc.close();

	// 4) ashe
	LOL ashe;
	N1 = 10; N2 = 20;
	a = 4.2; b = -5.3; x0 = 2.1; dx = 0.2;
	m = 5;
	ashe.fn1(N1, N2);
	ashe.fn2(a, b, x0, dx, m);

	ofstream dd("ashe.dat", ios::binary | ios::out);
	dd.write((char*)&N1, sizeof(N1));
	dd.write((char*)&N2, sizeof(N2));
	dd.write((char*)&a, sizeof(a));
	dd.write((char*)&b, sizeof(b));
	dd.write((char*)&x0, sizeof(x0));
	dd.write((char*)&dx, sizeof(dx));
	dd.write((char*)&m, sizeof(m));
	dd.write((char*)ashe.nn, 4 * (N2 - N1 + 1));
	dd.write((char*)ashe.mm, 4 * m);
	dd.close();
}