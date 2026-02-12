#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, a, b;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void tree(vector<int>& v, vector<vector<int>>& vv, int p, int c) {
    v[c]=p;
    if (vv[c].size()==1) return;
    for (int i = 0; i < vv[c].size(); i++) if (vv[c][i]!=p) tree(v,vv,c,vv[c][i]);
}

void solve() {
    cin >> N;
    vector<int> v(N+1,0);
    vector<vector<int>> vv(N+1,vector<int> ());
    for (int i = 0; i < N-1; i++)
    {
        cin >> a >> b;
        vv[a].push_back(b);
        vv[b].push_back(a);
    }
    for (int i = 0; i < vv[1].size(); i++) tree(v,vv,1,vv[1][i]);
    for (int i = 2; i < N+1; i++) cout << v[i] << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
