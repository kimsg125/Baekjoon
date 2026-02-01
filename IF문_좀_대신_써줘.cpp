#include <bits/stdc++.h>
using namespace std;

typedef pair<string,int> psi;

int N, M, n;

void solve() {
    cin >> N >> M;
    vector<psi> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    for (int i = 0; i < M; i++)
    {
        cin >> n;
        int left=0, right=N-1, ans=right;
        while (left<=right)
        {
            int mid=(left+right)/2;
            if (v[mid].second>=n)
            {
                right=mid-1;
                ans=mid;
            }
            else left=mid+1;
        }
        cout << v[ans].first << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}