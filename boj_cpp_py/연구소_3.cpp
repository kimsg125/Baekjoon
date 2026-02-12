#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

int N, M, n, min_time=2500;
int Map[50][50];
int tmp[50][50];
int visited[50][50];

void bfs() {
    queue<pii> q;
    bool empty_exist=false;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (Map[i][j]==0)
            {
                tmp[i][j]=0;
                visited[i][j]=0;
                empty_exist=true;
            }
            else if (Map[i][j]==1)
            {
                tmp[i][j]=-1;
                visited[i][j]=1;
            }
            else if (Map[i][j]==2)
            {
                tmp[i][j]=-1;
                visited[i][j]=0;
            }
            else if (Map[i][j]==3)
            {
                q.push(make_pair(i,j));
                tmp[i][j]=0;
                visited[i][j]=1;
            }
        }
    }
    while (empty_exist && !q.empty())
    {
        pii p=q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int xx=p.first+dx[i], yy=p.second+dy[i];
            if (xx<0 || xx>N-1 || yy<0 || yy>N-1 || visited[xx][yy]==1) continue;
            q.push(make_pair(xx,yy));
            tmp[xx][yy]=tmp[p.first][p.second]+1;
            visited[xx][yy]=1;
        }
    }
    int max_time=0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (tmp[i][j]==0 && Map[i][j]==0) return;
            if (Map[i][j]==2) continue;
            if (tmp[i][j]>max_time) max_time=tmp[i][j];
        }
    }
    if (max_time<min_time) min_time=max_time;
}

void game(vector<pii> virus, int ind, int cnt) {
    if (cnt==M)
    {
        bfs();
        return;
    }
    if (ind==virus.size()) return;
    Map[virus[ind].first][virus[ind].second]=3;
    game(virus, ind+1, cnt+1);
    Map[virus[ind].first][virus[ind].second]=2;
    game(virus, ind+1, cnt);
}

void solve() {
    cin >> N >> M;
    vector<pii> virus;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> Map[i][j];
            if (Map[i][j]==2) virus.push_back(make_pair(i,j));
            // 0:빈칸 1:벽 2:바이러스 3:활성 바이러스
        }
    }
    game(virus,0,0);
    if (min_time==2500) cout << -1;
    else cout << min_time;
}

int main() {
    solve();
}