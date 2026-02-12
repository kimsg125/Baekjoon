#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MAX 9223372036854775807;
typedef pair<int,int> pii;

int N, x, cnt=0;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void pipe(vector<vector<int>>& vv, int x, int y, int state) {
    if (x==N-1 && y==N-1) 
    {
        cnt++;
        return;
    }
    if ((state==0 || state==1) && y+1<=N-1 && vv[x][y+1]!=1) pipe(vv,x,y+1,0);// 가로
    if ((state==1 || state==2) && x+1<=N-1 && vv[x+1][y]!=1) pipe(vv,x+1,y,2);// 세로
    if (x+1<=N-1 && y+1<=N-1 && vv[x+1][y+1]!=1 && vv[x+1][y]!=1 && vv[x][y+1]!=1) pipe(vv,x+1,y+1,1);// 대각선
}

void solve() {
    cin >> N;
    vector<vector<int>> vv(N, vector<int> (N,0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> x;
            vv[i][j]=x;
        }
    }
    int state=0;// 가로 0, 대각선 1, 세로 2
    pipe(vv,0,1,state);
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
