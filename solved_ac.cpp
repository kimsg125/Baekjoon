#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, m, k, cnt=0, max=0, min=300000;
    double sum=0;
    string S;
    vector<int> A;
    cin >> n;
    if (n==0) cout << 0;
    else
    {
        m=round(n*0.15);
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            A.push_back(k);
        }
        sort(A.begin(),A.end());
        for (int i = m; i < n-m; i++)
        {
            sum+=A[i];
        }
        cout << round(sum/(n-2*m));
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}