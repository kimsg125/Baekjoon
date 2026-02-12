#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, M, x, y;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
vector<int> v(101,0), vv(101,0);
deque<pii> q;

int SNL() {
    int n, d;
    q.push_back(make_pair(1,0));
    while (!q.empty())
    {
        pii p=q.front();
        n=p.first;
        d=p.second;
        if (n==100) break;
        q.pop_front();
        for (int i = 1; i < 7; i++)
        {
            if (n+i<=100 && vv[n+i]==0)
            {
                if (v[n+i]==0)
                {
                    q.push_back(make_pair(n+i,d+1));
                    vv[n+i]=1;
                }
                else
                {
                    q.push_back(make_pair(v[n+i],d+1));
                    vv[n+i]=1;
                    vv[v[n+i]]=1;
                }
            }
        }
    }
    return d;
}

void solve() {
    cin >> N >> M;
    for (int i = 0; i < N+M; i++)
    {
        cin >> x >> y;
        v[x]=y;
    }
    cout << SNL();
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
