#include <bits/stdc++.h>
using namespace std;

int N, d, k, c, n;

void solve() {
    cin >> N >> d >> k >> c;
    deque<int> q, qq;
    vector<int> cnt(d+1,0);
    int type_cnt=0, max_type=0;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        q.push_back(n);
        if (cnt[n]==0) type_cnt++;
        cnt[n]++;
        if (i<k-1) qq.push_back(n);
        if (q.size()==k)
        {
            if (cnt[c]!=0 && type_cnt>max_type) max_type=type_cnt;
            else if (cnt[c]==0 && type_cnt+1>max_type) max_type=type_cnt+1;
            if (cnt[q.front()]==1) type_cnt--;
            cnt[q.front()]--;
            q.pop_front();
        }
    }
    for (int i = 0; i < k-1; i++)
    {
        n=qq.front();
        q.push_back(n);
        if (cnt[n]==0) type_cnt++;
        cnt[n]++;
        qq.pop_front();
        if (q.size()==k)
        {
            if (cnt[c]!=0 && type_cnt>max_type) max_type=type_cnt;
            else if (cnt[c]==0 && type_cnt+1>max_type) max_type=type_cnt+1;
            if (cnt[q.front()]==1) type_cnt--;
            cnt[q.front()]--;
            q.pop_front();
        }
    }
    cout << max_type;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}