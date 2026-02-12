#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<pair<int,int>,pair<int,int>> pii;

int M, N, H=1, x;
int dx[6]={-1,1,0,0,0,0};
int dy[6]={0,0,-1,1,0,0};
int dz[6]={0,0,0,0,-1,1};
vector<vector<vector<int>>> v;
deque<pii> q;

int tomato() {
    int x, y, z, d=0;
    while (!q.empty())
    {
        pii p=q.front();
        x=p.first.first;
        y=p.first.second;
        z=p.second.first;
        d=p.second.second;
        q.pop_front();
        for (int i = 0; i < 6; i++)
        {
            if (x+dx[i]>=0 && x+dx[i]<H && y+dy[i]>=0 && y+dy[i]<N && z+dz[i]>=0 && z+dz[i]<M && v[x+dx[i]][y+dy[i]][z+dz[i]]==0)
            {
                q.push_back(make_pair(make_pair(x+dx[i],y+dy[i]),make_pair(z+dz[i],d+1)));
                v[x+dx[i]][y+dy[i]][z+dz[i]]=1;
            }
        }
    }
    return d;
}

void solve() {
    bool flag=true;
    cin >> M >> N;
    for (int i = 0; i < H; i++)
    {
        vector<vector<int>> v2;
        for (int j = 0; j < N; j++)
        {
            vector<int> v3;
            for (int k = 0; k < M; k++)
            {
                cin >> x;
                if (x==0) flag=false;
                else if (x==1) q.push_back(make_pair(make_pair(i,j),make_pair(k,0)));
                v3.push_back(x);
            }
            v2.push_back(v3);
        }
        v.push_back(v2);
    }
    if (flag) cout << 0;
    else
    {
        int max=tomato();
        for (int i = 0; i < H; i++) for (int j = 0; j < N; j++) for (int k = 0; k < M; k++) if (v[i][j][k]==0) flag=true;
        if (flag) cout << -1;
        else cout << max;
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
