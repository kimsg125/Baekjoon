#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,pair<int,int>> pii;

int M, N, x, y;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
vector<int> v;

int gcd(int a, int b) {
    if (b==0) return a;
    return gcd(b,a%b);
}

pii EEA(int a, int b) {
    if (b==0) return make_pair(a,make_pair(1,0));
    pii g=EEA(b,a%b);
    int x=g.second.first, y=g.second.second;
    return make_pair(g.first,make_pair(y,x-(a/b)*y));
}

void solve() {
    cin >> M >> N >> x >> y;
    x%=M;
    y%=N;
    int d=gcd(M,N);
    if((x-y)%d!=0) cout << -1 << '\n';
    else
    {
        M/=d;
        N/=d;
        pii g=EEA(M,N);
        int a=g.second.first, b=g.second.second;
        int mod=M*N*d;
        int result=(x*b*N+y*a*M)%mod;
        if (result<=0) result+=mod;
        cout << result << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) solve();
    //solve();
}
