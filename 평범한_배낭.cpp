#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, K, W, V;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void solve() {
    cin >> N >> K;
    vector<int> v(100001,0);
    for (int i = 0; i < N; i++)
    {
        cin >> W >> V;
        if (W>K) continue;
        for (int j = K-W; j > 0; j--)
        {
            if (v[j]!=0) v[j+W]=max(v[j]+V,v[j+W]);
        }
        v[W]=max(V,v[W]);
    }
    int m=0;
    for (int i = 1; i < K+1; i++)
    {
        if (v[i]>m) m=v[i];
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
