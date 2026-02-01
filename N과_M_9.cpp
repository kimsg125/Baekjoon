#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, M, x;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void perm(vector<int>& v, vector<int>& vv, int cnt) {
    if (cnt==0)
    {
        for (int i = 0; i < M; i++)
        {
            cout << vv[i] << ' ';
        }
        cout << '\n';
        return;
    }
    int n=0;
    for (int i = 0; i < N; i++)
    {
        if (v[i]==0 || v[i]==n) continue;
        n=v[i];
        vv.push_back(v[i]);
        int tmp=v[i];
        v[i]=0;
        perm(v,vv,cnt-1);
        v[i]=tmp;
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
    perm(v,vv,M);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
