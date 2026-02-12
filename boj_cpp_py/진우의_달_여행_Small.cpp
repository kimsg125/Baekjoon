#include <bits/stdc++.h>
using namespace std;

int N, M, min_sum=1000;
int v[6][6];

void game(int x, int y, int sum_val, int dir) {
    if (sum_val>=min_sum) return;
    if (x==N-1)
    {
        min_sum=sum_val;
        return;
    }
    if (y!=0 && dir!=1) game(x+1,y-1,sum_val+v[x+1][y-1],1);
    if (dir!=2) game(x+1,y,sum_val+v[x+1][y],2);
    if (y!=M-1 && dir!=3) game(x+1,y+1,sum_val+v[x+1][y+1],3);
}

void solve() {
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < M; i++) game(0,i,v[0][i],-1);
    cout << min_sum;
}

int main() {
    solve();
}