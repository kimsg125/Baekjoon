#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, M, x;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void solve() {
    int x1, y1, x2, y2;
    cin >> N >> M;
    vector<vector<int>> vv(N+1,vector<int> (N+1,0)), sum(N+1,vector<int> (N+1,0));
    for (int i = 1; i < N+1; i++)
    {
        for (int j = 1; j < N+1; j++)
        {
            cin >> x;
            vv[i][j]=x;
        }
    }
    for (int i = 1; i < N+1; i++)
    {
        int partsum=0;
        for (int j = 1; j < N+1; j++)
        {
            partsum+=vv[i][j];
            sum[i][j]=sum[i-1][j]+partsum;
        }
    }
    for (int i = 0; i < M; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        cout << sum[x2][y2]-sum[x1-1][y2]-sum[x2][y1-1]+sum[x1-1][y1-1] << '\n';
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
