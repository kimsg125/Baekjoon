#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

void solve() {
    vector<pii> A;
    A.push_back(make_pair(1,0));
    A.push_back(make_pair(0,1));
    for (int i = 2; i < 41; i++) A.push_back(make_pair(A[i-2].first+A[i-1].first,A[i-2].second+A[i-1].second));
    int T, n;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> n;
        cout << A[n].first << ' ' << A[n].second << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
