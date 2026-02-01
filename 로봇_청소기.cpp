#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};

int N, M, r, c, d, cnt=0;
int Map[50][50];

void solve() {
    cin >> N >> M >> r >> c >> d; // d 0 북 1 동 2 남 3 서
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> Map[i][j];
        }
    }
    while (1)
    {
        if (Map[r][c]==0) Map[r][c]=2;
        bool not_cleaned=false;
        for (int i = 0; i < 4; i++)
        {
            if (r+dx[i]<0 || r+dx[i]>=N || c+dy[i]<0 || c+dy[i]>=M) continue;
            if (Map[r+dx[i]][c+dy[i]]==0)
            {
                not_cleaned=true;
                break;
            }
        }
        if (!not_cleaned)
        {
            if (Map[r+dx[(d+2)%4]][c+dy[(d+2)%4]]==1) break;
            r+=dx[(d+2)%4];
            c+=dy[(d+2)%4];
            continue;
        }
        if (d==0) d=3;
        else d--;
        if (Map[r+dx[d]][c+dy[d]]!=0) continue;
        r+=dx[d];
        c+=dy[d];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (Map[i][j]==2) cnt++;
        }
    }
    cout << cnt;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}