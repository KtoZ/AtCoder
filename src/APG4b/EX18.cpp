#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++) {
        cin >> A.at(i) >> B.at(i);
    }

    // ここにプログラムを追記
    // (ここで"試合結果の表"の2次元配列を宣言)
    vector<vector<char>> table(N, vector<char>(N, '-'));
    for (int i = 0; i < M; i++) {
        int win = A[i] - 1;
        int lose = B[i] - 1;
        table[win][lose] = 'o';
        table[lose][win] = 'x';
    }

    for (auto row : table)
    {
        for (int i = 0; i < row.size(); i++) {
            cout << row.at(i);
            if (i == row.size() - 1) {
                cout << endl; // 末尾なら改行
            }
            else {
                cout << " ";  // それ以外なら空白
            }
        }
    }
}