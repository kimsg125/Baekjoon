#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, r, c;

void solve() {
    cin >> N >> r >> c;
    int n=pow(2,N), sum=0;
    int v[2][2]={{0,1},{2,3}};
    vector<int> x,y;
    for (int i = 0; i < N-1; i++)
    {
        n/=2;
        x.push_back(r/n);
        r%=n;
        y.push_back(c/n);
        c%=n;
    }
    x.push_back(r);
    y.push_back(c);
    for (int i = 0; i < N; i++) sum+=v[x[i]][y[i]]*pow(2,2*(N-1-i));
    cout << sum;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
