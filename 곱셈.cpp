#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int A, B, C;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
vector<int> v;

void solve() {
    cin >> A >> B >> C;
    int r=1;
    while (B>0)
    {
        if (B%2==1) r=(r*A)%C;
        A=(A*A)%C;
        B/=2;
    }
    cout << r;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
