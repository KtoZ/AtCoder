#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long h;
    cin >> h;

    long long addCount = 1;
    long long output = 0;
    while (h > 0)
    {
        h /= 2;
        output += addCount;
        addCount *= 2;
    }

    cout << output << endl;
}