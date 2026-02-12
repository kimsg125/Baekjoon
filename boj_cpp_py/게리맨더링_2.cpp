#include <bits/stdc++.h>
using namespace std;

int N, min_gap=100000;
int Map[21][21];
int check[21][21];

void reset_check()
{
    for (int i = 1; i < N+1; i++)
    {
        for (int j = 1; j < N+1; j++)
        {
            check[i][j]=0;
        }
    }
}

void game(int x, int y, int d1, int d2)
{
    vector<int> cnt(5,0);
    reset_check();
    for (int i = 1; i < x+d1; i++)
    {
        for (int j = 1; j <= min(y,y+x-1-i); j++)
        {
            cnt[0]+=Map[i][j];
            check[i][j]=1;
        }
    }
    for (int j = y+1; j < N+1; j++)
    {
        for (int i = 1; i <= min(x+d2,x+j-y-1); i++)
        {
            cnt[1]+=Map[i][j];
            check[i][j]=2;
        }
    }
    for (int j = 1; j < y-d1+d2; j++)
    {
        for (int i = max(x+d1,x+d1-y+d1+1+j); i < N+1; i++)
        {
            cnt[2]+=Map[i][j];
            check[i][j]=3;
        }
    }
    for (int i = x+d2+1; i < N+1; i++)
    {
        for (int j = max(y-d1+d2,y+d2+1-i+x+d2); j < N+1; j++)
        {
            cnt[3]+=Map[i][j];
            check[i][j]=4;
        }
    }
    for (int i = 1; i < N+1; i++)
    {
        for (int j = 1; j < N+1; j++)
        {
            if (check[i][j]==0) cnt[4]+=Map[i][j];
        }
    }
    int max_cnt=0, min_cnt=100000;
    for (int i = 0; i < 5; i++)
    {
        if (cnt[i]>max_cnt) max_cnt=cnt[i];
        if (cnt[i]<min_cnt) min_cnt=cnt[i];
    }
    if (max_cnt-min_cnt<min_gap) min_gap=max_cnt-min_cnt;
}

void solve() {
    cin >> N;
    for (int i = 1; i < N+1; i++)
    {
        for (int j = 1; j < N+1; j++)
        {
            cin >> Map[i][j];
        }
    }
    for (int y = 1; y <= N; y++)
    {
        for (int d1 = 1; d1 <= y-1; d1++)
        {
            for (int d2 = 1; d2 <= N-y; d2++)
            {
                for (int x = 1; x <= N-d1-d2; x++)
                {
                    game(x,y,d1,d2);
                }
            }
        }
    }
    cout << min_gap;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}