#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

int N, M, H, a, b, min_cnt=4;
int Map[31][11]; // H 가로 N 세로

int game() {
    for (int i = 1; i < N+1; i++)
    {
        int x=1, y=i;
        while (x<H+1)
        {
            if (Map[x][y]!=0) y=Map[x][y];
            x++;
        }
        if (y!=i) return 0;
    }
    return 1;
}

void dfs(int cnt, int x, int y) {
    if (game())
    {
        if (cnt<min_cnt) min_cnt=cnt;
    }
    if (cnt==3) return;
    for (int i = y; i < N; i++)
    {
        for (int j = 1; j < H+1; j++)
        {
            if (i==y && j<x) continue;
            if (Map[j][i]!=0 || Map[j][i+1]!=0) continue;
            Map[j][i]=i+1;
            Map[j][i+1]=i;
            dfs(cnt+1, j, i);
            Map[j][i]=0;
            Map[j][i+1]=0;
        }
    }
}

void solve() {
    cin >> N >> M >> H;
    for (int i = 0; i < M; i++)
    {
        cin >> a >> b;
        Map[a][b]=b+1;
        Map[a][b+1]=b;
    }
    dfs(0, 1, 1);
    if (min_cnt==4) cout << -1;
    else cout << min_cnt;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}