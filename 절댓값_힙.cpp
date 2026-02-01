#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, x;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
vector<int> v;
priority_queue<pii,vector<pii>,greater<>> q;

void solve() {
    int ab;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        if (x>0) ab=x;
        else ab=x*(-1);
        if (x==0)
        {
            if (q.empty()) cout << 0 << '\n';
            else
            {
                cout << q.top().second << '\n';
                q.pop();
            }
        }
        else q.push(make_pair(ab,x));
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
