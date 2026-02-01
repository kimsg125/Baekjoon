#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<string,int> pii;

void solve() {
    int N, K, n, cnt=0;
    string S;
    vector<int> A;
    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        A.push_back(n);
    }
    for (int i = 0; i < N; i++)
    {
        n=A.back();
        A.pop_back();
        if (n>K) continue;
        cnt+=K/n;
        K%=n;
        if (K==0) break;
    }
    cout << cnt;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
