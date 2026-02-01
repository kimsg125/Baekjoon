#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, x;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
vector<vector<int>> v, vv;

void rec(int n, int p) {
    if (vv[n][p]==1) return;
    vv[n][p]=1;
    for (int i = 0; i < N; i++) if (v[p][i]==1) rec(n,i);
}

void solve() {
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        vector<int> v2, vv2;
        for (int j = 0; j < N; j++)
        {
            cin >> x;
            v2.push_back(x);
            vv2.push_back(0);
        }
        v.push_back(v2);
        vv.push_back(vv2);
    }
    for (int i = 0; i < N; i++) for (int j = 0; j < N; j++) if (v[i][j]==1) rec(i,j);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++) cout << vv[i][j] << ' ';
        cout << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
