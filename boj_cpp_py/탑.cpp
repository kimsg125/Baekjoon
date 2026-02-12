#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, n;

void solve() {
    cin >> N;
    deque<pii> q;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        while (!q.empty() && q.back().first<n)
        {
            q.pop_back();
        }
        if (!q.empty() && q.back().first>n)
        {
            cout << q.back().second << ' ';
        }
        else cout << 0 << ' ';
        q.push_back(make_pair(n,i+1));
    }
}


int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}