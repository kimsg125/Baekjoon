#include <bits/stdc++.h>
using namespace std;

#define int long long

int N;

void solve() {
    cin >> N;
    vector<double> v(N,0), cnt(N,0);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < N; i++)
    {
        double n1=-1000000000, d1=1;
        for (int j = i+1; j < N; j++)
        {
            int n2=v[j]-v[i], d2=j-i;
            if (n2*d1>n1*d2)
            {
                cnt[i]++;
                cnt[j]++;
                n1=n2;
                d1=d2;
            }
        }
    }
    int max_cnt=0;
    for (int i = 0; i < N; i++)
    {
        if (cnt[i]>max_cnt) max_cnt=cnt[i];
    }
    cout << max_cnt;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}