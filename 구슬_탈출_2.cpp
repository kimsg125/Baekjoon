#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

int N, M;
string S;

void solve() {
    cin >> N >> M;
    vector<vector<int>> board(N, vector<int> (M,0));
    vector<int> state(5,0); // red_x, red_y, blue_x, blue_y, cnt
    for (int i = 0; i < N; i++)
    {
        cin >> S;
        for (int j = 0; j < M; j++)
        {
            if (S[j]=='#') board[i][j]=-1;
            else if (S[j]=='R')
            {
                state[0]=i;
                state[1]=j;
            }
            else if (S[j]=='B')
            {
                state[2]=i;
                state[3]=j;
            }
            else if (S[j]=='O') board[i][j]=1;
        }
    }
    int cnt=-1;
    queue<vector<int>> q;
    q.push(state);
    while (!q.empty())
    {
        vector<int> st;
        st=q.front();
        q.pop();
        if (board[st[2]][st[3]]==1) continue;
        if (board[st[0]][st[1]]==1)
        {
            cnt=st[4];
            break;
        }
        if (st[4]==10) continue;
        int tmp0=st[0], tmp1=st[1], tmp2=st[2], tmp3=st[3];
        st[4]++;
        // 왼쪽
        if (st[0]==st[2] && st[1]<st[3])
        {
            while(1)
            {
                if (board[st[0]][st[1]-1]==1)
                {
                    st[1]--;
                    break;
                }
                if (board[st[0]][st[1]-1]==-1) break;
                st[1]--;
            }
            while(1)
            {
                if (board[st[2]][st[3]-1]==1)
                {
                    st[3]--;
                    break;
                }
                if (board[st[2]][st[3]-1]==-1 || st[3]-1==st[1]) break;
                st[3]--;
            }
        }
        else
        {
            while(1)
            {
                if (board[st[2]][st[3]-1]==1)
                {
                    st[3]--;
                    break;
                }
                if (board[st[2]][st[3]-1]==-1) break;
                st[3]--;
            }
            while(1)
            {
                if (board[st[0]][st[1]-1]==1)
                {
                    st[1]--;
                    break;
                }
                if (board[st[0]][st[1]-1]==-1 || (st[0]==st[2] && st[1]-1==st[3])) break;
                st[1]--;
            }
        }
        if (st[0]!=tmp0 || st[1]!=tmp1 || st[2]!=tmp2 || st[3]!=tmp3) q.push(st);
        // 오른쪽
        st[0]=tmp0; st[1]=tmp1; st[2]=tmp2; st[3]=tmp3;
        if (st[0]==st[2] && st[1]>st[3])
        {
            while(1)
            {
                if (board[st[0]][st[1]+1]==1)
                {
                    st[1]++;
                    break;
                }
                if (board[st[0]][st[1]+1]==-1) break;
                st[1]++;
            }
            while(1)
            {
                if (board[st[2]][st[3]+1]==1)
                {
                    st[3]++;
                    break;
                }
                if (board[st[2]][st[3]+1]==-1 || st[3]+1==st[1]) break;
                st[3]++;
            }
        }
        else
        {
            while(1)
            {
                if (board[st[2]][st[3]+1]==1)
                {
                    st[3]++;
                    break;
                }
                if (board[st[2]][st[3]+1]==-1) break;
                st[3]++;
            }
            while(1)
            {
                if (board[st[0]][st[1]+1]==1)
                {
                    st[1]++;
                    break;
                }
                if (board[st[0]][st[1]+1]==-1 || (st[0]==st[2] && st[1]+1==st[3])) break;
                st[1]++;
            }
        }
        if (st[0]!=tmp0 || st[1]!=tmp1 || st[2]!=tmp2 || st[3]!=tmp3) q.push(st);
        // 위쪽
        st[0]=tmp0; st[1]=tmp1; st[2]=tmp2; st[3]=tmp3;
        if (st[1]==st[3] && st[0]<st[2])
        {
            while(1)
            {
                if (board[st[0]-1][st[1]]==1)
                {
                    st[0]--;
                    break;
                }
                if (board[st[0]-1][st[1]]==-1) break;
                st[0]--;
            }
            while(1)
            {
                if (board[st[2]-1][st[3]]==1)
                {
                    st[2]--;
                    break;
                }
                if (board[st[2]-1][st[3]]==-1 || st[2]-1==st[0]) break;
                st[2]--;
            }
        }
        else
        {
            while(1)
            {
                if (board[st[2]-1][st[3]]==1)
                {
                    st[2]--;
                    break;
                }
                if (board[st[2]-1][st[3]]==-1) break;
                st[2]--;
            }
            while(1)
            {
                if (board[st[0]-1][st[1]]==1)
                {
                    st[0]--;
                    break;
                }
                if (board[st[0]-1][st[1]]==-1 || (st[1]==st[3] && st[0]-1==st[2])) break;
                st[0]--;
            }
        }
        if (st[0]!=tmp0 || st[1]!=tmp1 || st[2]!=tmp2 || st[3]!=tmp3) q.push(st);
        // 아래쪽
        st[0]=tmp0; st[1]=tmp1; st[2]=tmp2; st[3]=tmp3;
        if (st[1]==st[3] && st[0]>st[2])
        {
            while(1)
            {
                if (board[st[0]+1][st[1]]==1)
                {
                    st[0]++;
                    break;
                }
                if (board[st[0]+1][st[1]]==-1) break;
                st[0]++;
            }
            while(1)
            {
                if (board[st[2]+1][st[3]]==1)
                {
                    st[2]++;
                    break;
                }
                if (board[st[2]+1][st[3]]==-1 || st[2]+1==st[0]) break;
                st[2]++;
            }
        }
        else
        {
            while(1)
            {
                if (board[st[2]+1][st[3]]==1)
                {
                    st[2]++;
                    break;
                }
                if (board[st[2]+1][st[3]]==-1) break;
                st[2]++;
            }
            while(1)
            {
                if (board[st[0]+1][st[1]]==1)
                {
                    st[0]++;
                    break;
                }
                if (board[st[0]+1][st[1]]==-1 || (st[1]==st[3] && st[0]+1==st[2])) break;
                st[0]++;
            }
        }
        if (st[0]!=tmp0 || st[1]!=tmp1 || st[2]!=tmp2 || st[3]!=tmp3) q.push(st);
    }
    cout << cnt;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}