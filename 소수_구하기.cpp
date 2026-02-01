#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int M, N;
    cin >> M >> N;
    vector<int> A(N+1,1);
    A[1]=0;
    for (int i = 2; i < N+1; i++)
    {
        if (A[i]==0) continue;
        int j=2*i;
        while (j<=N)
        {
            A[j]=0;
            j+=i;
        }
    }
    for (int i = M; i < N+1; i++)
    {
        if (A[i]==1) cout << i << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}