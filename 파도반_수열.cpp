#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

void solve() {
    int T, N;
    vector<int> P;
    P.push_back(1);
    P.push_back(1);
    P.push_back(1);
    for (int i = 3; i < 100; i++) P.push_back(P[i-3]+P[i-2]);
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        cout << P[N-1] << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
