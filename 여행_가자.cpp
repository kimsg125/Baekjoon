#include <bits/stdc++.h>
using namespace std;

int N, M;

void solve() {
    cin >> N >> M;
    vector<vector<int>> vv(N+1, vector<int> (N+1,0));
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> vv[i][j];
        }
    }
    vector<int> v(M,0);
    for (int i = 0; i < M; i++) cin >> v[i];
    bool able=true;
    for (int i = 0; i < M-1; i++)
    {
        int begin=v[i], end=v[i+1];
        vector<int> visited(N+1,0);
        deque<int> q;
        visited[begin]=1;
        q.push_back(begin);
        while (!q.empty())
        {
            if (visited[end]==1) break;
            int p=q.front();
            q.pop_front();
            for (int j = 1; j <= N; j++)
            {
                if (visited[j]==1) continue;
                if (vv[p][j]==1)
                {
                    visited[j]=1;
                    q.push_back(j);
                }
            }
        }
        if (visited[end]==0) able=false;
    }
    if (able) cout << "YES";
    else cout << "NO";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}