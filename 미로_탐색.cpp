#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<pair<int,int>,int> pii;

int N, M;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
vector<vector<int>> v;
deque<pii> q;

int miro(int x, int y, int cnt) {
    q.push_back(make_pair(make_pair(x,y),cnt));
    while (true)
    {
        pii p=q.front();
        q.pop_front();
        x=p.first.first;
        y=p.first.second;
        cnt=p.second;
        if (x==N-1 && y==M-1) break;
        for (int i = 0; i < 4; i++)
        {
            if (x+dx[i]>=0 && x+dx[i]<N && y+dy[i]>=0 && y+dy[i]<M && v[x+dx[i]][y+dy[i]]==1)
            {
                q.push_back(make_pair(make_pair(x+dx[i],y+dy[i]),cnt+1));
                v[x+dx[i]][y+dy[i]]=0;
            }
        }
    }
    return cnt;
}

void solve() {
    string s;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        vector<int> v2;
        cin >> s;
        for (int j = 0; j < M; j++)
        {
            if (s[j]=='1') v2.push_back(1);
            else v2.push_back(0);
        }
        v.push_back(v2);
    }
    cout << miro(0,0,1);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
