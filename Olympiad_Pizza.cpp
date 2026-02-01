#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MAX 9223372036854775807;
typedef pair<int,int> pii;

int N, n;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void solve() {
    cin >> N;
    queue<pii> q;
    vector<int> v(N+1,0);
    pii p;
    int t = 0;
    for (int i = 1; i < N+1; i++)
    {
        cin >> n;
        q.push(make_pair(i,n));
    }    
    while (!q.empty())
    {
        t++;
        p = q.front();
        q.pop();
        if (p.second == 1) v[p.first] = t;
        else q.push(make_pair(p.first,p.second-1));
    }
    for (int i = 1; i < N+1; i++)
    {
        cout << v[i] << ' ';
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
