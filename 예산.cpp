#include <bits/stdc++.h>
using namespace std;

#define int long long

int N, M, n, sum=0;

void solve() {
    cin >> N;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        v.push_back(n);
        sum+=n;
    }
    sort(v.begin(), v.end());
    cin >> M;
    if (sum<=M) cout << v[v.size()-1];
    else
    {
        int begin_sum=0, ind=0;
        while (1)
        {
            if (begin_sum+v[ind]*(v.size()-ind)>M) break;
            begin_sum+=v[ind];
            ind++;
        }
        cout << (M-begin_sum)/(v.size()-ind);
    }
}

int32_t main() {
    solve();
}