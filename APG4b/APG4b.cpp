#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++) {
        cin >> A.at(i) >> B.at(i);
    }

    // �����Ƀv���O������ǋL
    // (������"�������ʂ̕\"��2�����z���錾)
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
                cout << endl; // �����Ȃ���s
            }
            else {
                cout << " ";  // ����ȊO�Ȃ��
            }
        }
    }
}