#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N == 1) {
        cout << 1 << endl;
        return 0;
    }

    vector<int> P(N);
    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
    }

    int counter = N;
    int minValue = P[0];
    for (int i = 0; i < N; i++)
    {
        if (P[i] > minValue) {
            counter--;
        }
        minValue = min(minValue, P[i]);
    }

    cout << counter << endl;
}