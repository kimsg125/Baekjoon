#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<pair<int,int>,int> pii;

int N, M, x, a, b;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
vector<vector<int>> v, vv;
deque<pii> q;

void bfs(int x, int y, int n) {
    q.push_back(make_pair(make_pair(x,y),n));
    while (!q.empty())
    {
        pii p=q.front();
        x=p.first.first;
        y=p.first.second;
        n=p.second;
        q.pop_front();
        for (int i = 0; i < 4; i++)
        {
            if (x+dx[i]>=0 && x+dx[i]<N && y+dy[i]>=0 && y+dy[i]<M && vv[x+dx[i]][y+dy[i]]==-1)
            {
                vv[x+dx[i]][y+dy[i]]=n+1;
                q.push_back(make_pair(make_pair(x+dx[i],y+dy[i]),n+1));
            }
        }
    }
}

void solve() {
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        vector<int> v2, vv2;
        for (int j = 0; j < M; j++)
        {
            cin >> x;
            if (x==2)
            {
                a=i;
                b=j;
            }
            v2.push_back(x);
            if (x==1) vv2.push_back(-1);
            else vv2.push_back(0);
        }
        v.push_back(v2);
        vv.push_back(vv2);
    }
    bfs(a,b,0);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++) cout << vv[i][j] << ' ';
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
