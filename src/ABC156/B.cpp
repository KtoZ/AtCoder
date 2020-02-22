#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    string a;
    while (n > 0)
    {
        a += n % k;
        n /= k;
    }
    
    cout << a.length() << endl;
}
