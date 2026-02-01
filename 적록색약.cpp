#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
vector<vector<int>> v, vv;
deque<pii> q;

void RGB(int x, int y, int c) {
    q.push_back(make_pair(x,y));
    v[x][y]=0;
    while (!q.empty())
    {
        pii p=q.front();
        int x=p.first;
        int y=p.second;
        q.pop_front();
        for (int i = 0; i < 4; i++)
        {
            if (x+dx[i]>=0 && x+dx[i]<N && y+dy[i]>=0 && y+dy[i]<N && v[x+dx[i]][y+dy[i]]==c)
            {
                q.push_back(make_pair(x+dx[i],y+dy[i]));
                v[x+dx[i]][y+dy[i]]=0;
            }
        }
    }
}

void RB(int x, int y, int c) {
    q.push_back(make_pair(x,y));
    vv[x][y]=0;
    while (!q.empty())
    {
        pii p=q.front();
        int x=p.first;
        int y=p.second;
        q.pop_front();
        for (int i = 0; i < 4; i++)
        {
            if (x+dx[i]>=0 && x+dx[i]<N && y+dy[i]>=0 && y+dy[i]<N && vv[x+dx[i]][y+dy[i]]==c)
            {
                q.push_back(make_pair(x+dx[i],y+dy[i]));
                vv[x+dx[i]][y+dy[i]]=0;
            }
        }
    }
}

void solve() {
    string s;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        vector<int> v2, vv2;
        cin >> s;
        for (int j = 0; j < N; j++)
        {
            if (s[j]=='R')
            {
                v2.push_back(1);
                vv2.push_back(1);
            }
            else if (s[j]=='G')
            {
                v2.push_back(2);
                vv2.push_back(1);
            }
            else
            {
                v2.push_back(3);
                vv2.push_back(3);
            }
        }
        v.push_back(v2);
        vv.push_back(vv2);
    }
    int cnt1=0, cnt2=0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (v[i][j]!=0)
            {
                RGB(i,j,v[i][j]);
                cnt1++;
            }
            if (vv[i][j]!=0)
            {
                RB(i,j,vv[i][j]);
                cnt2++;
            }
        }
    }
    cout << cnt1 << ' ' << cnt2;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
