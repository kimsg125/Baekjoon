#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void solve() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> Map(h+2,vector<int> (w+2,0));
    vector<int> Key(27,0);

    string s;
    for (int i=0; i<h; i++) {
        cin >> s;
        for (int j=0; j<w; j++) {
            if (s[j]=='*') Map[i+1][j+1]=-1;
            else if (s[j]=='$') Map[i+1][j+1]=-2;
            else if (s[j]>='a' && s[j]<='z') Map[i+1][j+1]=s[j]-'a'+1;
            else if (s[j]>='A' && s[j]<='Z') Map[i+1][j+1]=s[j]-'A'+27;
        }
    }
    cin >> s;
    if (s!="0") {
        for (int i=0; i<s.length(); i++) {
            Key[s[i]-'a'+1]=1;
        }
    }

    int cnt=0;
    bool changed=true;
    while (changed) {
        changed=false;
        vector<vector<int>> visited(h+2,vector<int> (w+2,0));
        deque<pii> q;
        q.push_back(make_pair(0,0));
        visited[0][0]=1;
        while (!q.empty()) {
            int x=q.front().first, y=q.front().second;
            q.pop_front();
            for (int i=0; i<4; i++) {
                int nx=x+dx[i], ny=y+dy[i];
                if (nx<0 || nx>h+1 || ny<0 || ny>w+1 || Map[nx][ny]==-1 || visited[nx][ny]==1) continue;
                if (Map[nx][ny]==0) {
                    q.push_back(make_pair(nx,ny));
                    visited[nx][ny]=1;
                }
                else if (Map[nx][ny]==-2) {
                    q.push_back(make_pair(nx,ny));
                    visited[nx][ny]=1;
                    Map[nx][ny]=0;
                    cnt++;
                }
                else if (Map[nx][ny]>=1 && Map[nx][ny]<=26) {
                    q.push_back(make_pair(nx,ny));
                    visited[nx][ny]=1;
                    Key[Map[nx][ny]]=1;
                    Map[nx][ny]=0;
                    changed=true;
                }
                else if (Map[nx][ny]>=27 && Map[nx][ny]<=52 && Key[Map[nx][ny]-26]==1) {
                    q.push_back(make_pair(nx,ny));
                    visited[nx][ny]=1;
                    Map[nx][ny]=0;
                }
            }
        }
    }
    cout << cnt << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    for (int i=0; i<T; i++) {
        solve();
    }

    return 0;
}