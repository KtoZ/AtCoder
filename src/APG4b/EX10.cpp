#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	// ここにプログラムを追記
	cout << "A:";
	int aCounter = 0;
	while (aCounter < A)
	{
		cout << "]";
		aCounter++;
	}
	cout << endl;

	cout << "B:";
	int bCounter = 0;
	while (bCounter < B)
	{
		cout << "]";
		bCounter++;
	}
	cout << endl;
}