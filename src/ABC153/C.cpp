#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    if (k >= n) {
        cout << 0 << endl;
        return 0;
    }

    long long output = 0;
    sort(h.begin(), h.end());
    for (int i = 0; i < n - k; i++)
    {
        output += h[i];
    }
    cout << output << endl;
}