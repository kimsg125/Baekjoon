#include <bits/stdc++.h>
using namespace std;

typedef pair<pair<int,int>,int> piii;

int N, D, s, e, l;

void solve() {
    cin >> N >> D;
    vector<piii> v;
    vector<int> time(D+1,0);
    for (int i = 0; i < N; i++)
    {
        cin >> s >> e >> l;
        if (e>D || l>=e-s) continue;
        v.push_back(make_pair(make_pair(s,e),l));
    }
    for (int i = 0; i < D+1; i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j].first.first==i)
            {
                if (time[v[j].first.second]==0 || time[v[j].first.second]>time[i]+v[j].second) time[v[j].first.second]=time[i]+v[j].second;
            }
        }
        if (time[i+1]==0 || time[i+1]>time[i]+1) time[i+1]=time[i]+1;
    }
    cout << time[D];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}