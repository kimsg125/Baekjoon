#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N;
vector<pii> v;

void solve() {
    int n, m, start=0, cnt=0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> n >> m;
        v.push_back(make_pair(m,n));
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < N; i++)
    {
        if (v[i].second>=start)
        {
            cnt++;
            start=v[i].first;
        }
    }
    cout << cnt;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
