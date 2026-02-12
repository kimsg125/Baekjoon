#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, K, n;
string s;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void solve() {
    cin >> N >> K;
    vector<int> hp(2*N,0);
    // 0    1    2    ... N-2 N-1
    // 2N-1 2N-2 2N-3 ... N+1 N
    vector<int> robot(N,0);
    int tmp, total_cnt = 0;
    for (int i = 0; i < 2*N; i++)
    {
        cin >> n;
        hp[i] = n;
    }
    while(true)
    {
        total_cnt++;

        tmp = hp[2*N-1];
        for (int i = 2*N-1; i > 0; i--)
        {
            hp[i] = hp[i-1];
        }
        hp[0] = tmp;
        for (int i = N-1; i > 0; i--)
        {
            robot[i] = robot[i-1];
        }
        robot[0] = 0;
        if (robot[N-1]=1) robot[N-1]=0;

        for (int i = N-2; i >= 0; i--)
        {
            if (robot[i]==1 && robot[i+1]==0 && hp[i+1]>0)
            {
                robot[i+1] = 1;
                robot[i] = 0;
                hp[i+1]--;
            }
        }
        if (robot[N-1]=1) robot[N-1]=0;

        if(hp[0]>0)
        {
            robot[0] = 1;
            hp[0]--;
        }

        int cnt = 0;
        for (int i = 0; i < 2*N; i++)
        {
            if (hp[i]==0) cnt++;
        }
        if (cnt>=K) break;
    }
    cout << total_cnt;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
