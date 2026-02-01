#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, x;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void solve() {
    cin >> N;
    vector<vector<int>> vv(2,vector<int> (N)), vv2(2,vector<int> (N));
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        vv[0][i]=x;
    }
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        vv[1][i]=x;
    }
    vv2[0][0]=vv[0][0];
    vv2[1][0]=vv[1][0];
    if (N==1) cout << max(vv2[0][0],vv2[1][0]) << '\n';
    else
    {
        for (int i = 1; i < N; i++)
        {
            vv2[0][i]=max(vv2[1][i-1]+vv[0][i],vv2[0][i-1]);
            vv2[1][i]=max(vv2[0][i-1]+vv[1][i],vv2[1][i-1]);
        }
        cout << max(vv2[0][N-1],vv2[1][N-1]) << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) solve();
    //solve();
}
