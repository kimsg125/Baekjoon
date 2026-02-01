#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

void solve() {
    int N, n, min, cnt=0;
    cin >> N;
    vector<pii> pv;
    vector<int> v(N,0);
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        pv.push_back(make_pair(n,i));
    }
    sort(pv.begin(),pv.end());
    min=pv.front().first;
    for (int i = 0; i < N; i++)
    {
        if (pv[i].first>min)
        {
            cnt++;
            v[pv[i].second]=cnt;
            min=pv[i].first;
        }
        else v[pv[i].second]=cnt;
    }
    for (int i = 0; i < N; i++) cout << v[i] << ' ';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
