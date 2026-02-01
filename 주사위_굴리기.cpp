#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

int N, M, x, y, K, k, tmp;
int Map[20][20];
int dice[6]; // 바닥 0 북 1 동 2 서 3 남 4 위 5
//   1
// 3 0 2
//   4
//   5

void east() {
    tmp=dice[0];
    dice[0]=dice[2];
    dice[2]=dice[5];
    dice[5]=dice[3];
    dice[3]=tmp;
    y++;
    if (Map[x][y]==0) Map[x][y]=dice[0];
    else
    {
        dice[0]=Map[x][y];
        Map[x][y]=0;
    }
}

void west() {
    tmp=dice[0];
    dice[0]=dice[3];
    dice[3]=dice[5];
    dice[5]=dice[2];
    dice[2]=tmp;
    y--;
    if (Map[x][y]==0) Map[x][y]=dice[0];
    else
    {
        dice[0]=Map[x][y];
        Map[x][y]=0;
    }
}

void north() {
    tmp=dice[0];
    dice[0]=dice[1];
    dice[1]=dice[5];
    dice[5]=dice[4];
    dice[4]=tmp;
    x--;
    if (Map[x][y]==0) Map[x][y]=dice[0];
    else
    {
        dice[0]=Map[x][y];
        Map[x][y]=0;
    }
}

void south() {
    tmp=dice[0];
    dice[0]=dice[4];
    dice[4]=dice[5];
    dice[5]=dice[1];
    dice[1]=tmp;
    x++;
    if (Map[x][y]==0) Map[x][y]=dice[0];
    else
    {
        dice[0]=Map[x][y];
        Map[x][y]=0;
    }
}

void solve() {
    cin >> N >> M >> x >> y >> K;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> Map[i][j];
        }
    }
    for (int i = 0; i < K; i++)
    {
        cin >> k;
        if (k==1)
        {
            if (y==M-1) continue;
            east();
        }
        else if (k==2)
        {
            if (y==0) continue;
            west();
        }
        else if (k==3)
        {
            if (x==0) continue;
            north();
        }
        else if (k==4)
        {
            if (x==N-1) continue;
            south();
        }
        cout << dice[5] << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}