#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};

int N, K, L, x, y, t, sec=0, dir=1, ind=0;// dir 위 0 오른쪽 1 아래 2 왼쪽 3
string s;
int board[100][100];
pii turn[100];

void solve() {
    cin >> N >> K;
    for (int i = 0; i < K; i++)
    {
        cin >> x >> y;
        board[x-1][y-1]=1;
    }
    cin >> L;
    for (int i = 0; i < L; i++)
    {
        cin >> t >> s;
        if (s=="L") turn[i]=make_pair(t,-1);
        else turn[i]=make_pair(t,1);
    }

    queue<pii> snake;
    snake.push(make_pair(0,0));
    board[0][0]=2;
    while (1)
    {
        sec++;
        pii head=snake.back();
        pii tail=snake.front();
        pii next=make_pair(head.first+dy[dir],head.second+dx[dir]);
        if (next.first<0 || next.first>=N || next.second<0 || next.second>=N || board[next.first][next.second]==2) break;
        if (board[next.first][next.second]==0)
        {
            board[tail.first][tail.second]=0;
            snake.pop();
        }
        board[next.first][next.second]=2;
        snake.push(next);
        if (sec==turn[ind].first)
        {
            if (turn[ind].second==1)
            {
                if (dir==3) dir=0;
                else dir++;
            }
            else
            {
                if (dir==0) dir=3;
                else dir--;
            }
            ind++;
        }
    }
    cout << sec;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}