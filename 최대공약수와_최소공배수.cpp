#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int A, B;
    cin >> A >> B;
    cout << gcd(A,B) << '\n' << lcm(A,B);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}