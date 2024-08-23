#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int N, M, n;
    set<int> A;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        A.insert(n);
    }
    int size = A.size();
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> n;
        if (A.find(n)==A.end()) cout << 0 << '\n';
        else cout << 1 << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}