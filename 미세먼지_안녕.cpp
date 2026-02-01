#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

int R, C, T, aircon_x, aircon_y=0;
int Map[51][51];
int tmp[51][51];

void cpy_tmp() {
    for (int i = 0; i < R; i++) for (int j = 0; j < C; j++) Map[i][j]=tmp[i][j];
    for (int i = 0; i < R; i++) for (int j = 0; j < C; j++) tmp[i][j]=0;
}

void game() {
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (Map[i][j]==-1) tmp[i][j]=-1;
            else if (Map[i][j]>0)
            {
                tmp[i][j]+=Map[i][j];
                int spread = Map[i][j]/5;
                for (int k = 0; k < 4; k++)
                {
                    int xx = i+dx[k], yy = j+dy[k];
                    if (xx<0 || xx>R-1 || yy<0 || yy>C-1 || Map[xx][yy]==-1) continue;
                    tmp[i][j]-=spread;
                    tmp[xx][yy]+=spread;
                }
            }
        }
    }
    cpy_tmp();
    int next_x=aircon_x-1, next_y=aircon_y+1;
    int tmp1=Map[next_x][next_y], tmp2;
    Map[next_x][next_y]=0;
    while (1) {
        if (next_x==aircon_x-1 && next_y!=C-1) next_y++;
        else if (next_y==C-1 && next_x!=0) next_x--;
        else if (next_x==0 && next_y!=0) next_y--;
        else if (next_y==0) next_x++;
        if (next_x==aircon_x-1 && next_y==aircon_y) break;
        tmp2=Map[next_x][next_y];
        Map[next_x][next_y]=tmp1;
        tmp1=tmp2;
    }
    next_x=aircon_x;
    next_y=aircon_y+1;
    tmp1=Map[next_x][next_y];
    Map[next_x][next_y]=0;
    while (1) {
        if (next_x==aircon_x && next_y!=C-1) next_y++;
        else if (next_y==C-1 && next_x!=R-1) next_x++;
        else if (next_x==R-1 && next_y!=0) next_y--;
        else if (next_y==0) next_x--;
        if (next_x==aircon_x && next_y==aircon_y) break;
        tmp2=Map[next_x][next_y];
        Map[next_x][next_y]=tmp1;
        tmp1=tmp2;
    }
}

void solve() {
    cin >> R >> C >> T;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> Map[i][j];
            if (Map[i][j]==-1) aircon_x=i;
        }
    }
    while (T)
    {
        game();
        T--;
    }
    int sum=0;
    for (int i = 0; i < R; i++) for (int j = 0; j < C; j++) if (Map[i][j]!=-1) sum+=Map[i][j];
    cout << sum;
}

int main() {
    solve();
}