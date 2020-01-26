#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, A;
    cin >> H >> A;

    int a = 0;
    if (H % A != 0) {
        a++;
    }

    cout << H / A + a << endl;
}