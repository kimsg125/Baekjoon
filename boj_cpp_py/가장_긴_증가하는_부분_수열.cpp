#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, x, M=0;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
vector<int> v, vv;

void solve() {
    vector<int> v2;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        v.push_back(x);
        vv.push_back(1);
    }
    for (int i = 1; i < N; i++) for (int j = 1; j < i+1; j++) if (v[i]>v[i-j]) vv[i]=max(vv[i],1+vv[i-j]);
    for (int i = 0; i < N; i++) if (vv[i]>M) M=vv[i];
    cout << M;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
