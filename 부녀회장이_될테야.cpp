#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<vector<int>> A;

void solve() {
    int k, n;
    cin >> k >> n;
    cout << A[k][n-1] << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    vector<int> A1;
    for (int i = 0; i < 14; i++)
    {
        A1.push_back(i+1);
    }
    A.push_back(A1);
    for (int i = 1; i < 15; i++)
    {
        vector<int> A2;
        for (int j = 0; j < 14; j++)
        {
            int sum=0;
            for (int k = 0; k <= j; k++) sum+=A[i-1][k];
            A2.push_back(sum);
        }
        A.push_back(A2);
    }

    int T;
    cin >> T;
    for (int i = 0; i < T; i++) solve();
}