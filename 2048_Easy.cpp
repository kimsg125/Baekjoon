#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

int N, max_num=0;
int board[20][20];
int order[5];
int tmp[20][20];

void move_up() {
    vector<int> line;
    for (int i = 0; i < N; i++)
    {
        line.clear();
        for (int j = 0; j < N; j++)
        {
            if (board[j][i]!=0)
            {
                line.push_back(board[j][i]);
                board[j][i]=0;
            }
        }
        if (line.size()==0) continue;
        int mem=line[0];
        for (int j = 1; j < line.size(); j++)
        {
            if (line[j]==mem)
            {
                line[j-1]*=2;
                line[j]=0;
            }
            mem=line[j];
        }
        int ind=0;
        for (int j = 0; j < line.size(); j++)
        {
            if (line[j]==0) continue;
            board[ind][i]=line[j];
            ind++;
        }
    }
}

void move_down() {
    vector<int> line;
    for (int i = 0; i < N; i++)
    {
        line.clear();
        for (int j = N-1; j >= 0; j--)
        {
            if (board[j][i]!=0)
            {
                line.push_back(board[j][i]);
                board[j][i]=0;
            }
        }
        if (line.size()==0) continue;
        int mem=line[0];
        for (int j = 1; j < line.size(); j++)
        {
            if (line[j]==mem)
            {
                line[j-1]*=2;
                line[j]=0;
            }
            mem=line[j];
        }
        int ind=N-1;
        for (int j = 0; j < line.size(); j++)
        {
            if (line[j]==0) continue;
            board[ind][i]=line[j];
            ind--;
        }
    }
}

void move_left() {
    vector<int> line;
    for (int i = 0; i < N; i++)
    {
        line.clear();
        for (int j = 0; j < N; j++)
        {
            if (board[i][j]!=0)
            {
                line.push_back(board[i][j]);
                board[i][j]=0;
            }
        }
        if (line.size()==0) continue;
        int mem=line[0];
        for (int j = 1; j < line.size(); j++)
        {
            if (line[j]==mem)
            {
                line[j-1]*=2;
                line[j]=0;
            }
            mem=line[j];
        }
        int ind=0;
        for (int j = 0; j < line.size(); j++)
        {
            if (line[j]==0) continue;
            board[i][ind]=line[j];
            ind++;
        }
    }
}

void move_right() {
    vector<int> line;
    for (int i = 0; i < N; i++)
    {
        line.clear();
        for (int j = N-1; j >= 0; j--)
        {
            if (board[i][j]!=0)
            {
                line.push_back(board[i][j]);
                board[i][j]=0;
            }
        }
        if (line.size()==0) continue;
        int mem=line[0];
        for (int j = 1; j < line.size(); j++)
        {
            if (line[j]==mem)
            {
                line[j-1]*=2;
                line[j]=0;
            }
            mem=line[j];
        }
        int ind=N-1;
        for (int j = 0; j < line.size(); j++)
        {
            if (line[j]==0) continue;
            board[i][ind]=line[j];
            ind--;
        }
    }
}

void game() {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            tmp[i][j]=board[i][j];
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        if (order[i]==0) move_up();
        else if (order[i]==1) move_down();
        else if (order[i]==2) move_left();
        else if (order[i]==3) move_right();
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (board[i][j]>max_num) max_num=board[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            board[i][j]=tmp[i][j];
        }
    }
}

void dfs(int cnt) {
    if (cnt==5)
    {
        game();
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        order[cnt]=i;
        dfs(cnt+1);
    }
}

void solve() {
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> board[i][j];
        }
    }
    dfs(0);
    cout << max_num;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}