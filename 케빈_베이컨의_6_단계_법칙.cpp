#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, M, a, b;
vector<vector<int>> v, vv;
deque<pii> q;

void bacon(int n) {
    int cnt=0;
    q.push_back(make_pair(n,0));
    while (!q.empty())
    {
        pii p=q.front();
        q.pop_front();
        for (int i = 1; i < N+1; i++)
        {
            if (v[p.first][i]!=1||n==i) continue;
            if (vv[n][i]==0)
            {
                vv[n][i]=p.second+1;
                cnt++;
                q.push_back(make_pair(i,p.second+1));
            }
        }
        if (cnt==N-1) break;
    }
    q.clear();
}

void solve() {
    cin >> N >> M;
    for (int i = 0; i < N+1; i++)
    {
        vector<int> v1(N+1,0);
        v.push_back(v1);
        vv.push_back(v1);
    }
    for (int i = 0; i < M; i++)
    {
        cin >> a >> b;
        v[a][b]=1;
        v[b][a]=1;
    }
    for (int i = 1; i < N+1; i++) bacon(i);
    int min=0, n=1;
    for (int i = 1; i < N+1; i++)
    {
        int sum=0;
        for (int j = 1; j < N+1; j++)
        {
            if (i==j) continue;
            sum+=vv[i][j];
        }
        if (min==0) min=sum;
        else if (sum<min)
        {
            min=sum;
            n=i;
        }
    }
    cout << n;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
