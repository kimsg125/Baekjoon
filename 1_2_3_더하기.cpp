#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int ott(int n) {
    if (n==3) return 4;
    if (n==2) return 2;
    if (n==1) return 1;
    return ott(n-1)+ott(n-2)+ott(n-3);
}

void solve() {
    int n, m;
    cin >> n;
    //m=ott(n);
    //cout << m << '\n';
    int A[10]={1,2,4,7,13,24,44,81,149,274};
    cout << A[n-1] << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) solve();
}
