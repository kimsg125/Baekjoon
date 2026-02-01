#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

vector<vector<int>> A;

int rec(int m, int n, int M, int N) {
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    A[m][n]=0;
    for (int i = 0; i < 4; i++) if ((m+dx[i])>=0 && (m+dx[i])<M && (n+dy[i])>=0 && (n+dy[i])<N && A[m+dx[i]][n+dy[i]]==1) rec(m+dx[i],n+dy[i],M,N);
    return 0;
}

void solve() {
    int M, N, K, m, n, cnt=0;
    cin >> M >> N >> K;
    A.clear();
    for (int i = 0; i < M; i++)
    {
        vector<int> A2(N,0);
        A.push_back(A2);
    }
    for (int i = 0; i < K; i++)
    {
        cin >> m >> n;
        A[m][n]=1;
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (A[i][j]==1)
            {
                rec(i,j,M,N);
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) solve();
}
