#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

vector<vector<int>> v;
vector<int> v3;

int rec(int N, int n) {
    if (v3[n]==1) return 1;
    v3[n]=1;
    for (int i = 1; i < N+1; i++) if (v[n][i]==1) rec(N,i);
    return 0;
}

void solve() {
    int N, M, a, b, cnt=0;
    cin >> N >> M;
    for (int i = 0; i < N+1; i++)
    {
        vector<int> v2(N+1,0);
        v.push_back(v2);
        v3.push_back(0);
    }
    for (int i = 0; i < M; i++)
    {
        cin >> a >> b;
        v[a][b]=1;
        v[b][a]=1;
    }
    for (int i = 1; i < N+1; i++) if (rec(N,i)==0) cnt++;
    cout << cnt;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
