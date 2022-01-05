#include <iostream>
#include<ctime>
#include<cmath>

using namespace std;

int ex_1();
int ex_2();
int ex_3();

int main()
{
	ex_1();
	ex_2();
	ex_3();
}
 
int ex_1() {
	cout << "Ex 1" << endl;

	int n;
	int k = 1;

	cout << "n = ";
	cin >> n;

	while (2 * k < n) {
		k += 1;
	}

	cout << "k = " << k << endl;

	return 0;
}

int ex_2() {
	cout << "\nEx 2" << endl;

	int x, n = 0, P1 = 1, P2 = 1;
	float eps, S = 0, Q = 1, R = 1;
	
	cout << "x = ";
	cin >> x;

	cout << "eps = ";
	cin >> eps;

	do {
		S += R;
		n += 1;
		Q = -float(x) / float(n);
		R *= Q;
	} while (abs(R) > eps);

	cout << "S = " << S << endl;
	cout << "exp = " << exp(-x) << endl;
	return 0;
}

int ex_3() {
	cout << "\nEx 3" << endl;

	const int N = 10;
	int mas[N];
	int M, mod, M10, kol=0;

	cout << "M = ";
	cin >> M;
	M10 = int(float(M)/10.);
	
	for (int k, i = 0; i < N-1; i++) {
		k = rand() % M10;
		mas[i] = k;
		mod = M - k;
	}
	mas[9] = mod;

	for (int i = 0; i < N; i++)
	{
		cout << i << ' ' << mas[i] << endl;
	}

	return 0;
}
