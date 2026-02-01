#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, M, x;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void perm(vector<int>& v, vector<int>& vv, int p, int cnt) {
    if (cnt==0)
    {
        for (int i = 0; i < M; i++)
        {
            cout << vv[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = p; i < v.size(); i++)
    {
        vv.push_back(v[i]);
        perm(v,vv,i,cnt-1);
        vv.pop_back();
    }
}

void solve() {
    vector<int> v, vv;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    perm(v,vv,0,M);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
