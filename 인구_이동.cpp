#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

int N, L, R;
int Map[51][51];
int visited[51][51];

void reset_visited() {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            visited[i][j]=0;
        }
    }
}

void solve() {
    cin >> N >> L >> R;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> Map[i][j];
        }
    }
    int day=-1;
    bool changed=true;
    while (changed)
    {
        day++;
        changed=false;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (visited[i][j]==1) continue;
                int sum=0, cnt=0, ind=0, x, y;
                vector<pii> v;
                v.push_back(make_pair(i,j));
                sum+=Map[i][j];
                cnt++;
                visited[i][j]=1;
                while(ind<v.size())
                {
                    x=v[ind].first;
                    y=v[ind].second;
                    for (int k = 0; k < 4; k++)
                    {
                        int xx=x+dx[k], yy=y+dy[k];
                        if (xx<0 || xx>=N || yy<0 || yy>=N || visited[xx][yy]==1) continue;
                        if ((Map[xx][yy]-Map[x][y]>=L && Map[xx][yy]-Map[x][y]<=R) || (Map[x][y]-Map[xx][yy]>=L && Map[x][y]-Map[xx][yy]<=R))
                        {
                            v.push_back(make_pair(xx,yy));
                            sum+=Map[xx][yy];
                            cnt++;
                            visited[xx][yy]=1;
                        }
                    }
                    ind++;
                }
                if (cnt!=1) changed=true;
                for (int k = 0; k < v.size(); k++)
                {
                    Map[v[k].first][v[k].second]=sum/cnt;
                }
            }
        }
        reset_visited();
    }
    cout << day;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}