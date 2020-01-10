//#include <bits/stdc++.h>
//using namespace std;
//
//void foreach_permutation(int n, std::function<void(int*)> f) {
//    int indexes[n];
//    for (int i = 0; i < n; i++) indexes[i] = i;
//    do {
//        f(indexes);
//    } while (std::next_permutation(indexes, indexes + n));
//}
//
//int main()
//{
//    int N;
//    cin >> N;
//
//    vector<int> P(N), Q(N);
//    for (int i = 0; i < N; ++i)
//    {
//        cin >> P[N];
//    }
//    for (int i = 0; i < N; ++i)
//    {
//        cin >> Q[N];
//    }
//
//    foreach_permutation(N, [](int* indexes) {
//        for (int i = 0; i < N; ++i)
//        {
//            if (P[i] != indexes[i])
//            {
//                break;
//            }
//        }
//        });
//
//    cout << abs(a - b) << endl;
//}