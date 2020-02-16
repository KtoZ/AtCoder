// RE

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<long long> vec(n * (n - 1) / 2);
    int vec_index = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            vec[vec_index] = a[i] * a[j];
            vec_index++;
        }
    }

    sort(vec.begin(), vec.end());
    cout << vec[k - 1] << endl;
}