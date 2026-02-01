#include <bits/stdc++.h>
using namespace std;

int N, K, n;

void solve() {
    cin >> N >> K;
    int max_length=0;
    deque<int> q;
    vector<int> cnt(100001,0);
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        q.push_back(n);
        cnt[n]++;
        while (cnt[n]>K)
        {
            cnt[q.front()]--;
            q.pop_front();
        }
        if (q.size()>max_length) max_length=q.size();
    }
    cout << max_length;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}