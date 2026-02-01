#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

vector<int> A(1000001,0);

int rec(int n) {
    if (n==1)
    {
        A[n]=0;
        return 0;
    }
    else if (A[n]) return A[n];
    else if (n%6==0) return A[n]=min(min(rec(n/3)+1,rec(n/2)+1),rec(n-1)+1);
    else if (n%3==0) return A[n]=min(rec(n/3)+1,rec(n-1)+1);
    else if (n%2==0) return A[n]=min(rec(n/2)+1,rec(n-1)+1);
    return A[n]=rec(n-1)+1;
}

void solve() {
    int N;
    cin >> N;
    cout << rec(N);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
