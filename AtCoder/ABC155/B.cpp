#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (p[i] % 2 == 0 && p[i] % 3 != 0 && p[i] % 5 != 0) 
        {
            cout << "DENIED" << endl;
            return 0;
        }
    }

    cout << "APPROVED" << endl;
}