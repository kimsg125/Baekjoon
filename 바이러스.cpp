#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

vector<int> com(101,0);
vector<vector<int>> inf_list(101,vector<int> ());

int infect(int n) {
    if (com[n]==1) return 0;
    com[n]=1;
    for (int i = 0; i < inf_list[n].size(); i++)
    {
        infect(inf_list[n][i]);
    }
    return 0;
}

void solve() {
    int N, M, a, b, cnt=0;
    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> a >> b;
        inf_list[a].push_back(b);
        inf_list[b].push_back(a);
    }

    infect(1);
    for (int i = 2; i < N+1; i++) if (com[i]==1) cnt++;
    cout << cnt;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}
