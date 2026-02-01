#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

int N, n, x, y, shark_size, eat_fish, time_passed, next_x, next_y, min_dist;
int Map[20][20];
int visited[20][20];

void check_Map() {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            visited[i][j]=0;
        }
    }
    queue<pii> q;
    q.push(make_pair(x,y));
    visited[x][y]=1;
    while (!q.empty()) {
        pii p=q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int xx=p.first+dx[i], yy=p.second+dy[i];
            if (xx<0 || xx>N-1 || yy<0 || yy>N-1 || visited[xx][yy]!=0) continue;
            if (Map[xx][yy]>shark_size) {
                visited[xx][yy]=-1;
                continue;
            }
            q.push(make_pair(xx,yy));
            visited[xx][yy]=visited[p.first][p.second]+1;
        }
    }
    min_dist=400;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (Map[i][j]!=0 && Map[i][j]<shark_size && visited[i][j]>0) {
                if (visited[i][j]<min_dist) {
                    next_x=i;
                    next_y=j;
                    min_dist=visited[i][j];
                }
            }
        }
    }
}

void solve() {
    cin >> N;
    shark_size=2;
    eat_fish=0;
    time_passed=0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> n;
            if (n==9) {
                x=i;
                y=j;
            }
            else Map[i][j]=n;
        }
    }
    while (1) {
        check_Map();
        if (min_dist==400) break;
        x=next_x;
        y=next_y;
        time_passed+=min_dist-1;
        Map[x][y]=0;
        eat_fish++;
        if (eat_fish==shark_size) {
            shark_size++;
            eat_fish=0;
        }
    }
    cout << time_passed;
}

int main() {
    solve();
}