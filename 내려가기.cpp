#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void solve() {
    int a, b, c;
    cin >> N;
    vector<int> v(3,0), h(3,0), l(3,0);
    for (int i = 0; i < N; i++)
    {
        cin >> v[0] >> v[1] >> v[2];
        a=max(h[0],h[1]);
        b=max(a,h[2]);
        c=max(h[1],h[2]);
        h[0]=v[0]+a;
        h[1]=v[1]+b;
        h[2]=v[2]+c;
        a=min(l[0],l[1]);
        b=min(a,l[2]);
        c=min(l[1],l[2]);
        l[0]=v[0]+a;
        l[1]=v[1]+b;
        l[2]=v[2]+c;
    }
    cout << max(h[0],max(h[1],h[2])) << ' ' << min(l[0],min(l[1],l[2]));
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
