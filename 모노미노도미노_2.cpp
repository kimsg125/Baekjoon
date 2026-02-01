#include <bits/stdc++.h>
using namespace std;

int N, t, x, y;
int blue[4][6], green[6][4];

void check_blue()
{
    ;
}

void check_green()
{
    ;
}

void game(int t, int x, int y)
{
    int n;
    if (t==1)
    {
        for (int j = 2; j < 6; j++)
        {
            if (blue[x][j]==1)
            {
                n=j-1;
                break;
            }
        }
        blue[x][n]=1;
        for (int i = 2; i < 6; i++)
        {
            if (green[i][y]==1)
            {
                n=i-1;
                break;
            }
        }
        green[n][y]=1;
    }
    else if (t==2)
    {
        ;
    }
    else
    {
        ;
    }
    check_blue();
    check_green();
}

void solve()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> t >> x >> y;
        game(t,x,y);
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
}