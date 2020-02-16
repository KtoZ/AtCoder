#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int a = max({ A, B, C });
    int b = min({ A, B, C });
    cout << a - b << endl;
}