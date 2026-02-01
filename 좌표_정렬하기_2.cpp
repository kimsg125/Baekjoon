#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int N, a, b;
    cin >> N;
    vector<pair<int,int>> A;
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        A.push_back({b,a});
    }
    sort(A.begin(),A.end());
    for (int i = 0; i < N; i++) cout << A[i].second << ' ' << A[i].first << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}