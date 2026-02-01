#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int K, k, cnt=0;
    vector<int> A;
    cin >> K;
    for (int i = 0; i < K; i++)
    {
        cin >> k;
        if (k!=0) A.push_back(k);
        else A.pop_back();
    }
    for (int i = 0; i < A.size(); i++) cnt+=A[i];
    cout << cnt;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}