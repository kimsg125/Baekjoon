#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int A, B, x, y;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
vector<int> v;
deque<pii> q;

void solve() {
    cin >> A >> B;
    q.push_back(make_pair(A,0));
    while (!q.empty())
    {
        x=q.front().first;
        y=q.front().second;
        if (x==B)
        {
            cout << y+1;
            return;
        }
        q.pop_front();
        if (x*2<=B) q.push_back(make_pair(x*2,y+1));
        if (10*x+1<=B) q.push_back(make_pair(10*x+1,y+1));
    }
    cout << -1;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
