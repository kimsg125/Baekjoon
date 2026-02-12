#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, r, g, b, A, B, C;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
vector<int> v;

void solve() {
    cin >> N;
    cin >> A >> B >> C;
    for (int i = 1; i < N; i++)
    {
        cin >> r >> g >> b;
        int minA=min(B,C), minB=min(A,C), minC=min(A,B);
        A=r+minA;
        B=g+minB;
        C=b+minC;
    }
    cout << min(A,min(B,C));
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
