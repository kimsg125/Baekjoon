#include <bits/stdc++.h>
using namespace std;

#define int long long

int N, n;

void solve() {
    cin >> N;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < N*N; i++)
    {
        cin >> n;
        pq.push(n);
        if (pq.size()>N) pq.pop();
    }
    cout << pq.top();
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}