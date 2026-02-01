#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<string,int> pii;

void solve() {
    int N, n, cnt=0;
    string S;
    vector<int> A;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        A.push_back(n);
    }
    sort(A.begin(),A.end());
    for (int i = 0; i < N; i++)
    {
        cnt+=A[i]*(N-i);
    }
    cout << cnt;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
