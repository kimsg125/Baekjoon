#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int ans;

void solve() {
    int N, M, n, min=0, max=0;
    cin >> N >> M;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        if (n>max) max=n;
        v.push_back(n);
    }
    int cut=(min+max)/2;
    while (cut!=min && cut!=max)
    {
        int sum=0;
        for (int i = 0; i < N; i++)
        {
            if (v[i]>cut) sum+=v[i]-cut;
        }
        if (sum>=M) min=cut;
        else max=cut;
        cut=(min+max)/2;
    }
    cout << cut;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
