#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<string,int> pii;

void solve() {
    int N, M, n, cnt=0;
    string site, pw;
    map<string,string> A;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> site >> pw;
        A[site]=pw;
    }
    for (int i = 0; i < M; i++)
    {
        cin >> site;
        cout << A[site] << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
