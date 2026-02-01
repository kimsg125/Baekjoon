#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, t, p;
string s;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void solve() {
    cin >> N;
    vector<int> T(N, 0);
    vector<int> P(N, 0);
    vector<int> M(N+1, 0);
    for (int i = 0; i < N; i++) {
        cin >> T[i] >> P[i];
    }
    for (int i = 0; i < N; i++) {
        if (i + T[i] <= N) {
            M[i + T[i]] = max(M[i + T[i]], M[i] + P[i]);
        }
        M[i + 1] = max(M[i + 1], M[i]);
    }
    cout << M[N];
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
