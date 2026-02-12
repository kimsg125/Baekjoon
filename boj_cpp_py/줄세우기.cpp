#include <bits/stdc++.h>
using namespace std;

int N;

void solve() {
    cin >> N;
    vector<int> v(N,0), dp(N,1);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (v[i]>v[j] && dp[i]<dp[j]+1) dp[i]=dp[j]+1;
        }
    }
    int max_len=0;
    for (int i = 0; i < N; i++)
    {
        if (dp[i]>max_len) max_len=dp[i];
    }
    cout << N-max_len;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}