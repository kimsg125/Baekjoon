#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int R, C, K;
string s;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

int dfs(vector<vector<int>> &v, int x, int y, int cnt) {
    if (x<0 || x>R-1 || y<0 || y>C-1 || v[x][y]==1 || cnt>K) return 0;
    if (x==0 && y==C-1) return (cnt==K) ? 1 : 0;

    int ret = 0;
    v[x][y] = 1;
    for (int i = 0; i < 4; i++)
    {
        ret += dfs(v, x+dx[i], y+dy[i], cnt+1);
    }
    v[x][y] = 0;

    return ret;
}

void solve() {
    cin >> R >> C >> K;
    vector<vector<int>> v(R, vector<int> (C, 0));
    for (int i = 0; i < R; i++)
    {
        cin >> s;
        for (int j = 0; j < C; j++)
        {
            if (s[j] == 'T') v[i][j] = 1;
        }
    }
    cout << dfs(v, R-1, 0, 1);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
