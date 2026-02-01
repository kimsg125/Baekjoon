#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int N, K, a=1, b=1;
    cin >> N >> K;
    for (int i = 0; i < K; i++)
    {
        a*=(N-i);
        b*=(i+1);
    }
    cout << a/b;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}