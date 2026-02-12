#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, K;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void solve() {
    cin >> N >> K;
    int t, p;
    vector<int> v(100001,-1);
    priority_queue<pii, vector<pii>, greater<pii>> q;
    if (K<=N) cout << N-K;
    else
    {
        q.push({0,N});
        v[N]=0;
        while (!q.empty())
        {
            t=q.top().first;
            p=q.top().second;
            q.pop();
            if (p==K) break;
            if (p<K && p<=50000 && v[2*p]==-1)
            {
                v[2*p]=t;
                q.push({t,2*p});
            }
            if (p<=99999 && v[p+1]==-1)
            {
                v[p+1]=t+1;
                q.push({t+1,p+1});
            }
            if (v[p-1]==-1)
            {
                v[p-1]=t+1;
                q.push({t+1,p-1});
            }
        }
        cout << t;
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
