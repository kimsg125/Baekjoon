#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string S;
    vector<vector<char>> A;
    for (int i = 0; i < 5; i++)
    {
        cin >> S;
        vector<char> A2;
        for (int j = 0; j < S.size(); j++) A2.push_back(S[j]);
        for (int j = 0; j < 15-S.size(); j++) A2.push_back(' ');
        A.push_back(A2);
    }
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (A[j][i] != ' ') cout << A[j][i];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}