#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    int ans = INT_MAX;
    for (int i = 1; i < 101; i++)
    {
        int i_min = 0;
        for (int j = 0; j < n; j++)
        {
            i_min += pow(x[j] - i, 2);
        }
        ans = min(ans, i_min);
    }
    
    cout << ans << endl;
}