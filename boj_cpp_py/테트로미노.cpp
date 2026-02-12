#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, M, x;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
vector<vector<int>> vv;

int MINO(int x, int y) {
    int m=0;
    if (x<N-3) m=max(m,vv[x][y]+vv[x+1][y]+vv[x+2][y]+vv[x+3][y]);
    if (y<M-3) m=max(m,vv[x][y]+vv[x][y+1]+vv[x][y+2]+vv[x][y+3]);
    if (x<N-2)
    {
        if (y>=1)
        {
            m=max(m,vv[x][y]+vv[x+1][y]+vv[x+2][y]+vv[x+2][y-1]);
            m=max(m,vv[x][y]+vv[x][y-1]+vv[x+1][y-1]+vv[x+2][y-1]);
            m=max(m,vv[x][y]+vv[x+1][y]+vv[x+1][y-1]+vv[x+2][y-1]);
            m=max(m,vv[x][y]+vv[x+1][y]+vv[x+2][y]+vv[x+1][y-1]);
        }
        if (y<M-1)
        {
            m=max(m,vv[x][y]+vv[x+1][y]+vv[x+2][y]+vv[x+2][y+1]);
            m=max(m,vv[x][y]+vv[x][y+1]+vv[x+1][y+1]+vv[x+2][y+1]);
            m=max(m,vv[x][y]+vv[x+1][y]+vv[x+1][y+1]+vv[x+2][y+1]);
            m=max(m,vv[x][y]+vv[x+1][y]+vv[x+2][y]+vv[x+1][y+1]);
        }
    }
    if (y<M-2)
    {
        if (x>=1) m=max(m,vv[x][y]+vv[x][y+1]+vv[x][y+2]+vv[x-1][y+1]);
        if (x<N-1)
        {
            m=max(m,vv[x][y]+vv[x][y+1]+vv[x][y+2]+vv[x+1][y+1]);
            m=max(m,vv[x][y]+vv[x][y+1]+vv[x][y+2]+vv[x+1][y+2]);
            m=max(m,vv[x][y]+vv[x+1][y]+vv[x+1][y+1]+vv[x+1][y+2]);
            m=max(m,vv[x][y]+vv[x][y+1]+vv[x+1][y+1]+vv[x+1][y+2]);
        }
    }
    if (y>=2)
    {
        if (x<N-1)
        {
            m=max(m,vv[x][y]+vv[x][y-1]+vv[x][y-2]+vv[x+1][y-2]);
            m=max(m,vv[x][y]+vv[x+1][y]+vv[x+1][y-1]+vv[x+1][y-2]);
            m=max(m,vv[x][y]+vv[x][y-1]+vv[x+1][y-1]+vv[x+1][y-2]);
        }
    }
    if (x<N-1 && y<M-1) m=max(m,vv[x][y]+vv[x][y+1]+vv[x+1][y]+vv[x+1][y+1]);
    return m;
}

void solve() {
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        vector<int> v;
        for (int j = 0; j < M; j++)
        {
            cin >> x;
            v.push_back(x);
        }
        vv.push_back(v);
    }
    int m=0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int a=MINO(i,j);
            if (a>m) m=a;
        }
    }
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
