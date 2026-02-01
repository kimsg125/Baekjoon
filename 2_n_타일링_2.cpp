#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

vector<int> A(1001,0);

int tile(int n) {
    if (n==1) return 1;
    if (n==2) return 3;
    if (A[n]) return A[n];
    return A[n]=(2*tile(n-2)+tile(n-1))%10007;
}

void solve() {
    int n;
    cin >> n;
    cout << tile(n)%10007;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
