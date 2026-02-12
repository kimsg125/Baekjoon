#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, x;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
vector<vector<int>> vv;

void solve() {
    int m=0;
    vector<int> v;
    cin >> N >> x;
    v.push_back(x);
    vv.push_back(v);
    for (int i = 1; i < N; i++)
    {
        v.clear();
        cin >> x;
        v.push_back(vv[i-1][0]+x);
        for (int j = 1; j < i; j++)
        {
            cin >> x;
            v.push_back(max(vv[i-1][j-1],vv[i-1][j])+x);
        }
        cin >> x;
        v.push_back(vv[i-1][i-1]+x);
        vv.push_back(v);
    }
    for (int i = 0; i < N; i++) if (vv[N-1][i]>m) m=vv[N-1][i];
    cout << m;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
