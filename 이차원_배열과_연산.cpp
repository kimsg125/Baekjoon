#include <bits/stdc++.h>
using namespace std;

int r, c, k, R, C;
int Map[100][100];
int cnt[101];

void solve() {
    cin >> r >> c >> k;
    R=3;
    C=3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> Map[i][j];
        }
    }
    int t=0;
    while (t<=100)
    {
        if (Map[r-1][c-1]==k)
        {
            cout << t;
            break;
        }
        if (t==100)
        {
            cout << -1;
            break;
        }
        t++;
        int max_cnt, ind;
        if (R>=C)
        {
            for (int i = 0; i < R; i++)
            {
                for (int j = 0; j < 101; j++) cnt[j]=0;
                max_cnt=0;
                for (int j = 0; j < C; j++)
                {
                    cnt[Map[i][j]]++;
                    if (max_cnt<cnt[Map[i][j]]) max_cnt=cnt[Map[i][j]];
                    Map[i][j]=0;
                }
                ind=0;
                for (int j = 1; j <= max_cnt; j++)
                {
                    for (int k = 1; k < 101; k++)
                    {
                        if (cnt[k]==j)
                        {
                            Map[i][ind]=k;
                            ind++;
                            Map[i][ind]=j;
                            ind++;
                        }
                        if (ind==100) break;
                    }
                    if (ind==100) break;
                }
                if (ind>C) C=ind;
            }
        }
        else
        {
            for (int i = 0; i < C; i++)
            {
                for (int j = 0; j < 101; j++) cnt[j]=0;
                max_cnt=0;
                for (int j = 0; j < R; j++)
                {
                    cnt[Map[j][i]]++;
                    if (max_cnt<cnt[Map[j][i]]) max_cnt=cnt[Map[j][i]];
                    Map[j][i]=0;
                }
                ind=0;
                for (int j = 1; j <= max_cnt; j++)
                {
                    for (int k = 1; k < 101; k++)
                    {
                        if (cnt[k]==j)
                        {
                            Map[ind][i]=k;
                            ind++;
                            Map[ind][i]=j;
                            ind++;
                        }
                        if (ind==100) break;
                    }
                    if (ind==100) break;
                }
                if (ind>R) R=ind;
            }
        }
    }
}

int main() {
    solve();
}