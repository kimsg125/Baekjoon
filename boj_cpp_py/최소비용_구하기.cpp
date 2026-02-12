#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, M, x, y, z, A, B;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void solve() {
    cin >> N >> M;
    vector<vector<pii>> vvp(N+1);
    vector<int> v(N+1,-1);
    priority_queue<pii, vector<pii>, greater<pii>> q;
    for (int i = 0; i < M; i++)
    {
        cin >> x >> y >> z;
        vvp[x].push_back({z,y});
    }
    cin >> A >> B;
    int start, sum;
    q.push({0,A});
    while(!q.empty())
    {
        sum=q.top().first;
        start=q.top().second;
        q.pop();
        if (v[start]==-1 || v[start]>sum)
        {
            v[start]=sum;
            for (int i = 0; i < vvp[start].size(); i++)
            {
                q.push({sum+vvp[start][i].first,vvp[start][i].second});
            }
        }
    }
    cout << v[B];
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
