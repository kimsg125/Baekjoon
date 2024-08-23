#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int N, cnt=0;
    cin >> N;
    for (int i = 5; i <= N; i+=5)
    {
        int j=i;
        while (j%5==0)
        {
            j/=5;
            cnt++;
        }
    }
    cout << cnt;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}