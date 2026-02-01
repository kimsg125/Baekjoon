#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MAX 9223372036854775807;
typedef pair<int,int> pii;

int N, M, P, n, x;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void solve() {
    cin >> N >> M >> P;
    vector<int> know_truth(N+1,0);
    for (int i = 0; i < P; i++)
    {
        cin >> x;
        know_truth[x]=1;
    }
    vector<vector<int>> vv(M+1, vector<int> (N+1,0));
    for (int i = 1; i < M+1; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            vv[i][x]=1;
        }
    }
    deque<int> q;
    for (int i = 1; i < N+1; i++) if (know_truth[i]==1) q.push_back(i);
    while(!q.empty())
    {
        x=q.front();
        q.pop_front();
        for (int i = 1; i < M+1; i++)
        {
            if (vv[i][x]==0) continue;
            for (int j = 1; j < N+1; j++)
            {
                if (vv[i][j]==1 && know_truth[j]==0)
                {
                    q.push_back(j);
                    know_truth[j]=1;
                }
            }
        }
    }
    int cnt=M;
    for (int i = 1; i < M+1; i++)
    {
        bool flag=false;
        for (int j = 1; j < N+1; j++)
        {
            if (!flag && vv[i][j]==1 && know_truth[j]==1)
            {
                flag=true;
                cnt--;
            }
        }
    }
    cout << cnt;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
