#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
vector<vector<int>> v;

int danji(int x, int y) {
    int cnt=0;
    deque<pii> q;
    q.push_back(make_pair(x,y));
    cnt++;
    while (true)
    {
        pii p=q.front();
        q.pop_front();
        x=p.first;
        y=p.second;
        v[x][y]=0;
        for (int i = 0; i < 4; i++)
        {
            if (x+dx[i]>=0 && x+dx[i]<N && y+dy[i]>=0 && y+dy[i]<N && v[x+dx[i]][y+dy[i]]==1)
            {
                q.push_back(make_pair(x+dx[i],y+dy[i]));
                cnt++;
                v[x+dx[i]][y+dy[i]]=0;
            }
        }
        if (q.empty()) break;
    }
    return cnt;
}

void solve() {
    string s;
    vector<int> vv;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        vector<int> v2;
        cin >> s;
        for (int j = 0; j < N; j++)
        {
            if (s[j]=='1') v2.push_back(1);
            else v2.push_back(0);
        }
        v.push_back(v2);
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (v[i][j]==1) vv.push_back(danji(i,j));
        }
    }
    sort(vv.begin(),vv.end());
    cout << vv.size() << '\n';
    for (int i = 0; i < vv.size(); i++) cout<< vv[i] << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
