#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,1,-1};
int new_d[5] = {0,2,1,4,3};

int R, C, M;
int Map[101][101];

void clear_Map() {
    for (int i = 1; i < R+1; i++) for (int j = 1; j < C+1; j++) Map[i][j]=0;
}

void solve() {
    cin >> R >> C >> M;
    vector<vector<int>> shark(M+1, vector<int> (6,0));
    for (int i = 1; i < M+1; i++)
    {
        shark[i][0]=1;
        cin >> shark[i][1] >> shark[i][2] >> shark[i][3] >> shark[i][4] >> shark[i][5]; // (r,c) 위치 s 속력 d 방향 z 크기
        Map[shark[i][1]][shark[i][2]]=i;
    }
    int king_y=0, sum=0;
    while (king_y<C)
    {
        king_y++;
        for (int i = 1; i < R+1; i++)
        {
            if (Map[i][king_y]!=0)
            {
                int shark_num=Map[i][king_y];
                shark[shark_num][0]=0;
                sum+=shark[shark_num][5];
                break;
            }
        }
        for (int i = 1; i < M+1; i++)
        {
            if (shark[i][0]==0) continue;
            if (shark[i][3]==0) continue;
            int r=shark[i][1], c=shark[i][2], s=shark[i][3], d=shark[i][4];
            if (d==1)
            {
                if (s<r) shark[i][1]=r-s;
                else
                {
                    s-=(r-1);
                    s%=(2*R-2);
                    if (s<R-1)
                    {
                        shark[i][1]=s+1;
                        shark[i][4]=2;
                    }
                    else shark[i][1]=2*R-1-s;
                }
            }
            else if (d==2)
            {
                if (s<R-r+1) shark[i][1]=r+s;
                else
                {
                    s-=(R-r);
                    s%=(2*R-2);
                    if (s<R-1)
                    {
                        shark[i][1]=R-s;
                        shark[i][4]=1;
                    }
                    else shark[i][1]=s-R+2;
                }
            }
            else if (d==3)
            {
                if (s<C-c+1) shark[i][2]=c+s;
                else
                {
                    s-=(C-c);
                    s%=(2*C-2);
                    if (s<C-1)
                    {
                        shark[i][2]=C-s;
                        shark[i][4]=4;
                    }
                    else shark[i][2]=s-C+2;
                }
            }
            else
            {
                if (s<c) shark[i][2]=c-s;
                else
                {
                    s-=(c-1);
                    s%=(2*C-2);
                    if (s<C-1)
                    {
                        shark[i][2]=s+1;
                        shark[i][4]=3;
                    }
                    else shark[i][2]=2*C-1-s;
                }
            }
        }
        clear_Map();
        for (int i = 1; i < M+1; i++)
        {
            if (shark[i][0]==0) continue;
            if (Map[shark[i][1]][shark[i][2]]!=0)
            {
                if (shark[Map[shark[i][1]][shark[i][2]]][5]>shark[i][5]) shark[i][0]=0;
                else
                {
                    shark[Map[shark[i][1]][shark[i][2]]][0]=0;
                    Map[shark[i][1]][shark[i][2]]=i;
                }
            }
            else Map[shark[i][1]][shark[i][2]]=i;
        }
    }
    cout << sum;
}

int main() {
    solve();
}