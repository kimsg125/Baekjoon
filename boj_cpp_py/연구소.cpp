#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

int N, M, n, max_safe=0;
int Map[8][8];
int tmp[8][8];

void cpy_to_tmp() {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            tmp[i][j]=Map[i][j];
        }
    }
}

void cpy_to_map() {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            Map[i][j]=tmp[i][j];
        }
    }
}

void game() {
    cpy_to_tmp();
    queue<pii> q;
    int x, y, safe=0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (Map[i][j]==2) q.push(make_pair(i,j));
        }
    }
    while (!q.empty())
    {
        pii p=q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            x=p.first+dx[i];
            y=p.second+dy[i];
            if (x<0 || x>=N || y<0 || y>=M || Map[x][y]!=0) continue;
            Map[x][y]=2;
            q.push(make_pair(x,y));
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (Map[i][j]==0) safe++;
        }
    }
    if (safe>max_safe) max_safe=safe;
    cpy_to_map();
}

void dfs(int cnt) {
    if (cnt==3)
    {
        game();
        return;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (Map[i][j]==0)
            {
                Map[i][j]=1;
                dfs(cnt+1);
                Map[i][j]=0;
            }
        }
    }
}

void solve() {
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> Map[i][j]; // 0 빈칸 1 벽 2 바이러스
        }
    }
    dfs(0);
    cout << max_safe;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}