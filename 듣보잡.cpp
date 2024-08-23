#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<string,int> pii;

void solve() {
    int N, M, cnt=0;
    string S;
    map<string, int> A;
    vector<string> B;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> S;
        A[S]=1;
    }
    for (int i = 0; i < M; i++)
    {
        cin >> S;
        if (A[S]==1)
        {
            B.push_back(S);
            cnt++;
        }
    }
    sort(B.begin(),B.end());
    cout << cnt << '\n';
    for (int i = 0; i < B.size(); i++) cout << B[i] << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
