#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    sort(p.begin(), p.end());

    list<string> li;
    int maxCount = 0;
    int counter = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (p[i] == p[i + 1]) {
            counter++;
        }
        else {
            if (counter == maxCount) {
                li.push_back(p[i]);
            }
            else if (counter > maxCount) {
                maxCount = counter;
                li.clear();
                li.push_back(p[i]);
            }
            counter = 1;
        }
    }
    
    if (counter == maxCount) {
        li.push_back(p[n - 1]);
    }
    else if (counter > maxCount) {
        maxCount = counter;
        li.clear();
        li.push_back(p[n - 1]);
    }

    for (auto &&val : li)
    {
        cout << val << endl;
    }
}