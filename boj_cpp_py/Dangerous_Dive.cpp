#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MAX 9223372036854775807;
typedef pair<int,int> pii;

int N, R, n;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void solve() {
    cin >> N >> R;
    vector<int> v(N+1, 0);
    for (int i = 0; i < R; i++)
    {
        cin >> n;
        v[n] = 1;
    }
    for (int i = 1; i < N+1; i++)
    {
        if (v[i] == 0) cout << i << ' ';
    }
    if (N == R) cout << '*';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
