#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

void solve() {
    int N, n;
    priority_queue<int, vector<int>, greater<int>> s;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        if (n==0)
        {
            if (s.empty()) cout << 0 << '\n';
            else
            {
                cout << s.top() << '\n';
                s.pop();
            }
        }
        else s.push(n);
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
