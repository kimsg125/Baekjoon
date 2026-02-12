#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, K;
vector<int> v(100001,0);
deque<pii> q;

int find(int N, int K) {
    q.push_back(make_pair(N,0));
    v[N]=1;
    while (true)
    {
        pii n=q.front();
        q.pop_front();
        if (n.first==K) return n.second;
        if (n.first-1>=0 && v[n.first-1]==0)
        {
            q.push_back(make_pair(n.first-1,n.second+1));
            v[n.first-1]=1;
        }
        if (n.first+1<=100000 && v[n.first+1]==0)
        {
            q.push_back(make_pair(n.first+1,n.second+1));
            v[n.first+1]=1;
        }
        if (n.first*2<=100000 && v[n.first*2]==0)
        {
            q.push_back(make_pair(n.first*2,n.second+1));
            v[n.first*2]=1;
        }
    }
    return 0;
}

void solve() {
    cin >> N >> K;
    cout << find(N,K);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
