#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, n, S, s;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void solve() {
    cin >> N;
    vector<int> v(N+1, 0);
    for (int i = 1; i < N+1; i++)
    {
        cin >> n;
        v[i] = n;
    }
    cin >> S;
    for (int i = 0; i < S; i++)
    {
        cin >> s >> n;
        if (s == 1)
        {
            for (int j = n; j < N+1; j+=n)
            {
                if (v[j] == 0) v[j] = 1;
                else v[j] = 0;
            }
        }
        else
        {
            if (v[n] == 0) v[n] = 1;
            else v[n] = 0;
            int j = 1;
            while (true)
            {
                if (n-j < 1 || n+j > N || v[n-j] != v[n+j]) break;
                if (v[n-j] == 0) v[n-j] = 1;
                else v[n-j] = 0;
                if (v[n+j] == 0) v[n+j] = 1;
                else v[n+j] = 0;
                j++;
            }
        }
    }
    for (int i = 1; i < N+1; i++)
    {
        cout << v[i] << ' ';
        if (i%20 == 0) cout << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
