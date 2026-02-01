#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

int N, M, min_cnt=64;
int Map[8][8];
int tmp[8][8];

void cpy_to_Map() {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            Map[i][j]=tmp[i][j];
        }
    }
}

void up(int x, int y) {
    int ind=1;
    while (1)
    {
        if (x-ind<0 || Map[x-ind][y]==6) break;
        if (Map[x-ind][y]==0) Map[x-ind][y]=7;
        ind++;
    }
}

void down(int x, int y) {
    int ind=1;
    while (1)
    {
        if (x+ind>N-1 || Map[x+ind][y]==6) break;
        if (Map[x+ind][y]==0) Map[x+ind][y]=7;
        ind++;
    }
}

void left(int x, int y) {
    int ind=1;
    while (1)
    {
        if (y-ind<0 || Map[x][y-ind]==6) break;
        if (Map[x][y-ind]==0) Map[x][y-ind]=7;
        ind++;
    }
}

void right(int x, int y) {
    int ind=1;
    while (1)
    {
        if (y+ind>M-1 || Map[x][y+ind]==6) break;
        if (Map[x][y+ind]==0) Map[x][y+ind]=7;
        ind++;
    }
}

void check(vector<pii> cctv, vector<int> dir) {
    for (int i = 0; i < cctv.size(); i++)
    {
        int x=cctv[i].first, y=cctv[i].second;
        if (Map[x][y]==1)
        {
            if (dir[i]==0) up(x,y);
            else if (dir[i]==1) down(x,y);
            else if (dir[i]==2) left(x,y);
            else if (dir[i]==3) right(x,y);
        }
        else if (Map[x][y]==2)
        {
            if (dir[i]==0)
            {
                up(x,y);
                down(x,y);
            }
            else if (dir[i]==1)
            {
                left(x,y);
                right(x,y);
            }
        }
        else if (Map[x][y]==3)
        {
            if (dir[i]==0)
            {
                up(x,y);
                right(x,y);
            }
            else if (dir[i]==1)
            {
                down(x,y);
                left(x,y);
            }
            else if (dir[i]==2)
            {
                left(x,y);
                up(x,y);
            }
            else if (dir[i]==3)
            {
                right(x,y);
                down(x,y);
            }
        }
        else if (Map[x][y]==4)
        {
            if (dir[i]==0)
            {
                up(x,y);
                right(x,y);
                down(x,y);
            }
            else if (dir[i]==1)
            {
                down(x,y);
                left(x,y);
                up(x,y);
            }
            else if (dir[i]==2)
            {
                left(x,y);
                up(x,y);
                right(x,y);
            }
            else if (dir[i]==3)
            {
                right(x,y);
                down(x,y);
                left(x,y);
            }
        }
        else if (Map[x][y]==5)
        {
            up(x,y);
            down(x,y);
            left(x,y);
            right(x,y);
        }
    }
    int cnt=0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (Map[i][j]==0) cnt++;
        }
    }
    if (cnt<min_cnt) min_cnt=cnt;
    cpy_to_Map();
}

void dfs(vector<pii> cctv, int ind, vector<int> dir) {
    if (ind==cctv.size())
    {
        check(cctv, dir);
        return;
    }
    int x=cctv[ind].first, y=cctv[ind].second;
    if (Map[x][y]==1)
    {
        dir[ind]=0;
        dfs(cctv, ind+1, dir);
        dir[ind]=1;
        dfs(cctv, ind+1, dir);
        dir[ind]=2;
        dfs(cctv, ind+1, dir);
        dir[ind]=3;
        dfs(cctv, ind+1, dir);
    }
    else if (Map[x][y]==2)
    {
        dir[ind]=0;
        dfs(cctv, ind+1, dir);
        dir[ind]=1;
        dfs(cctv, ind+1, dir);
    }
    else if (Map[x][y]==3)
    {
        dir[ind]=0;
        dfs(cctv, ind+1, dir);
        dir[ind]=1;
        dfs(cctv, ind+1, dir);
        dir[ind]=2;
        dfs(cctv, ind+1, dir);
        dir[ind]=3;
        dfs(cctv, ind+1, dir);
    }
    else if (Map[x][y]==4)
    {
        dir[ind]=0;
        dfs(cctv, ind+1, dir);
        dir[ind]=1;
        dfs(cctv, ind+1, dir);
        dir[ind]=2;
        dfs(cctv, ind+1, dir);
        dir[ind]=3;
        dfs(cctv, ind+1, dir);
    }
    else if (Map[x][y]==5)
    {
        dfs(cctv, ind+1, dir);
    }
}

void solve() {
    cin >> N >> M;
    vector<pii> cctv;
    vector<int> dir;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> Map[i][j]; // 0 빈칸 6 벽 1-5 cctv
            tmp[i][j]=Map[i][j];
            if (Map[i][j]!=0 && Map[i][j]!=6)
            {
                cctv.push_back(make_pair(i,j));
                dir.push_back(0);
            }
        }
    }
    dfs(cctv, 0, dir);
    cout << min_cnt;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}