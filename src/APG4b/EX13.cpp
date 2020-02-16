#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	int sum = 0;
	vector<int> vec(N);
	for (int i = 0; i < N; ++i)
	{
		cin >> vec[i];
		sum += vec[i];
	}

	int average = sum / N;
	for (int i = 0; i < N; ++i)
	{
		cout << abs(vec[i] - average) << endl;
	}
}