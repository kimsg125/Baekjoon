#include <bits/stdc++.h>
using namespace std;

int N, K;

int dx[5]={0,0,0,-1,1};
int dy[5]={0,1,-1,0,0};
int Map[13][13];//0흰색 1빨간색 2파란색
deque<int> Map_q[13][13];
int horse[11][3]; //[말 번호][행,열,방향]

int game()
{
    for (int i = 1; i <= K; i++)
    {
        int x = horse[i][0], y = horse[i][1], d = horse[i][2];
        int nx = x+dx[d], ny = y+dy[d];
        if (nx==0 || nx==N+1 || ny==0 || ny==N+1 || Map[nx][ny]==2)
        {
            if (horse[i][2]==1) horse[i][2]=2;
            else if (horse[i][2]==2) horse[i][2]=1;
            else if (horse[i][2]==3) horse[i][2]=4;
            else if (horse[i][2]==4) horse[i][2]=3;
            d = horse[i][2];
            nx = x+dx[d];
            ny = y+dy[d];
            if (nx==0 || nx==N+1 || ny==0 || ny==N+1 || Map[nx][ny]==2) continue;
            else if (Map[nx][ny]==0)
            {
                deque<int> tmp_q;
                while (Map_q[x][y].back()!=i)
                {
                    tmp_q.push_back(Map_q[x][y].back());
                    Map_q[x][y].pop_back();
                }
                tmp_q.push_back(Map_q[x][y].back());
                Map_q[x][y].pop_back();
                while (!tmp_q.empty())
                {
                    Map_q[nx][ny].push_back(tmp_q.back());
                    horse[tmp_q.back()][0]+=dx[d];
                    horse[tmp_q.back()][1]+=dy[d];
                    tmp_q.pop_back();
                }
            }
            else
            {
                while (Map_q[x][y].back()!=i)
                {
                    Map_q[nx][ny].push_back(Map_q[x][y].back());
                    horse[Map_q[x][y].back()][0]+=dx[d];
                    horse[Map_q[x][y].back()][1]+=dy[d];
                    Map_q[x][y].pop_back();
                }
                Map_q[nx][ny].push_back(Map_q[x][y].back());
                horse[Map_q[x][y].back()][0]+=dx[d];
                horse[Map_q[x][y].back()][1]+=dy[d];
                Map_q[x][y].pop_back();
            }
        }
        else if (Map[nx][ny]==0)
        {
            deque<int> tmp_q;
            while (Map_q[x][y].back()!=i)
            {
                tmp_q.push_back(Map_q[x][y].back());
                Map_q[x][y].pop_back();
            }
            tmp_q.push_back(Map_q[x][y].back());
            Map_q[x][y].pop_back();
            while (!tmp_q.empty())
            {
                Map_q[nx][ny].push_back(tmp_q.back());
                horse[tmp_q.back()][0]+=dx[d];
                horse[tmp_q.back()][1]+=dy[d];
                tmp_q.pop_back();
            }
        }
        else
        {
            while (Map_q[x][y].back()!=i)
            {
                Map_q[nx][ny].push_back(Map_q[x][y].back());
                horse[Map_q[x][y].back()][0]+=dx[d];
                horse[Map_q[x][y].back()][1]+=dy[d];
                Map_q[x][y].pop_back();
            }
            Map_q[nx][ny].push_back(Map_q[x][y].back());
            horse[Map_q[x][y].back()][0]+=dx[d];
            horse[Map_q[x][y].back()][1]+=dy[d];
            Map_q[x][y].pop_back();
        }
        if (Map_q[horse[i][0]][horse[i][1]].size()>=4) return 1;
    }
    return 0;
}

void solve()
{
    cin >> N >> K;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> Map[i][j];
        }
    }
    for (int i = 1; i <= K; i++)
    {
        cin >> horse[i][0] >> horse[i][1] >> horse[i][2];
        Map_q[horse[i][0]][horse[i][1]].push_back(i);
    }
    int turn=0;
    while (turn<1000)
    {
        turn++;
        if (game()==1) break;
    }
    if (turn<1000) cout << turn;
    else cout << -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
}