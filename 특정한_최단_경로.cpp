#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MAX 9223372036854775807;
typedef pair<int,int> pii;

int N, E, a, b, c;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void solve() {
    cin >> N >> E;
    vector<vector<int>> v(N+1,vector<int> (N+1,0));
    queue<int> q;
    for (int i = 0; i < E; i++)
    {
        cin >> a >> b >> c;
        v[a][b] = c;
        v[b][a] = c;
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
