#include <bits/stdc++.h>
using namespace std;

int N, S, P, n;

void solve() {
    cin >> N >> S >> P;
    bool rank=false;
    int cnt=0;
    for (int i = 1; i <= N; i++)
    {
        cin >> n;
        if (rank) continue;
        if (n==S) cnt++;
        else if (n<S)
        {
            if (cnt==0) cout << i;
            else cout << i-cnt;
            rank=true;
        }
    }
    if (N==0) cout << 1;
    else if (!rank)
    {
        if (N<P) cout << N+1-cnt;
        else cout << -1;
    }
}

int main() {
    solve();
}