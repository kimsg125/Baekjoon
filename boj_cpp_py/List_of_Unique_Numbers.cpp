#include <bits/stdc++.h>
using namespace std;

#define int long long

int N;

void solve() {
    cin >> N;
    vector<int> seq(N,0);
    for (int i = 0; i < N; i++) cin >> seq[i];
    int cnt=0, begin=0, end=0;
    map<int,int> m;
    m[seq[begin]]=1;
    while (true)
    {
        while (end<N-1 && m[seq[end+1]]==0)
        {
            end++;
            m[seq[end]]++;
        }
        if (begin>=N || end>=N) break;
        cnt+=end-begin+1;
        m[seq[begin]]--;
        begin++;
    }
    cout << cnt;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);    
    
    solve();
}