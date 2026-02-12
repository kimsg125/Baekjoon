#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, M, cnt=0;
vector<vector<int>> v;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

void rec(int x, int y) {
    if (v[x][y]==3) cnt++;
    v[x][y]=1;
    for (int i = 0; i < 4; i++)
    {
        if (x+dx[i]<0||x+dx[i]>=N||y+dy[i]<0||y+dy[i]>=M) continue;
        if (v[x+dx[i]][y+dy[i]]!=1) rec(x+dx[i],y+dy[i]);
    }
}

void solve() {
    int x, y;
    string S;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> S;
        vector<int> v2;
        for (int j = 0; j < M; j++)
        {
            if (S[j]=='O') v2.push_back(0);//빈 공간
            else if (S[j]=='X') v2.push_back(1);//벽
            else if (S[j]=='I')
            {
                v2.push_back(2);//도연이
                x=i;
                y=j;
            }
            else v2.push_back(3);//사람
        }
        v.push_back(v2);
    }
    rec(x,y);
    if (cnt==0) cout << "TT";
    else cout << cnt;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
