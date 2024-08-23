#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

void solve() {
    int N, M, n, cnt=0;
    cin >> N >> M;
    queue<pii> A;
    vector<int> B;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        A.emplace(n,i);
        B.push_back(n);
    }
    sort(B.begin(),B.end());
    while (true)
    {
        if (A.front().first<B.back())
        {
            pii i=A.front();
            A.pop();
            A.push(i);
        }
        else
        {
            cnt++;
            if (A.front().second==M) break;
            A.pop();
            B.pop_back();
        }
    }
    cout << cnt << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) solve();
}