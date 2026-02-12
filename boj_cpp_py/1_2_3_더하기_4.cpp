#include <bits/stdc++.h>
using namespace std;

int N;

void solve() {
    cin >> N;
    int cnt=0;
    for (int three = 0; three <= N/3; three++)
    {
        int n=N;
        n-=3*three;
        for (int two = 0; two <= n/2; two++)
        {
            cnt++;
        }
    }
    cout << cnt << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) solve();
}