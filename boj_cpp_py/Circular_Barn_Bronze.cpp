#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void solve() {
    cin >> N;
    vector<int> v(N+1);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }

    vector<int> vv(N+1,0);
    int min_sum = INT_MAX;
    for (int i = 1; i <= N; i++)
    {
        vv[i] = vv[i - 1] + v[i - 1];
    }
    for (int i = 0; i < N; i++)
    {
        int sum = 0;
        for (int j = i + 1; j < N; j++) {
            sum += (j - i) * v[j];
        }
        for (int j = 0; j < i; j++) {
            sum += (N - (i - j)) * v[j];
        }
        min_sum = min(min_sum, sum);
    }
    cout << min_sum;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
