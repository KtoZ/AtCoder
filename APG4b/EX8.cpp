#include <bits/stdc++.h>
using namespace std;

int main() {
	int p, price, N;
	cin >> p;

	// �p�^�[��1
	if (p == 1) {
		cin >> price >> N;
	}

	// �p�^�[��2
	if (p == 2) {
		string text;
		cin >> text >> price >> N;
		cout << text << "!" << endl;
	}

	cout << price * N << endl;
}