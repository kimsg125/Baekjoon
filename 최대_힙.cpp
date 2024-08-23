#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

void solve() {
    int N, n;
    cin >> N;
    priority_queue<int,vector<int>,less<>> q;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        if (n==0)
        {
            if (q.empty()) cout << 0 << '\n';
            else
            {
                cout << q.top() << '\n';
                q.pop();
            }
        }
        else q.push(n);
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
