#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string S;
    cin >> N;
    cin >> S;

    int counter = 0;
    for (int i = 0; i < N - 2; ++i)
    {
        string s = { S[i], S[i + 1], S[i + 2] };
        if (s == "ABC")
        {
            counter++;
        }
    }
    cout << counter << endl;
}