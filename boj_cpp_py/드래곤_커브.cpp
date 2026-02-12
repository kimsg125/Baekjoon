#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};

int N, x, y, d, g, cnt=0;
int Map[101][101];

void solve() {
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> x >> y >> d >> g;
        vector<int> dir;
        dir.push_back(d);
        Map[y][x]=1;
        x+=dx[d];
        y+=dy[d];
        Map[y][x]=1;
        if (g>0)
        {
            for (int j = 1; j <= g; j++)
            {
                for (int k = dir.size()-1; k >= 0; k--)
                {
                    d=(dir[k]+1)%4;
                    x+=dx[d];
                    y+=dy[d];
                    Map[y][x]=1;
                    dir.push_back(d);
                }
            }
        }
    }
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (Map[i][j]==1 && Map[i+1][j]==1 && Map[i][j+1]==1 && Map[i+1][j+1]==1) cnt++;
        }
    }
    cout << cnt;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}