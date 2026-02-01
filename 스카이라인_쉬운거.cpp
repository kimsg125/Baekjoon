#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

int N, x, y;

void solve() {
    cin >> N;
    deque<int> q;
    int cnt=0;
    q.push_back(0);
    for (int i = 0; i < N; i++)
    {
        cin >> x >> y;
        if (y>q.back())
        {
            q.push_back(y);
            cnt++;
        }
        else
        {
            while (y<q.back())
            {
                q.pop_back();
            }
            if (y!=q.back())
            {
                q.push_back(y);
                cnt++;
            }
        }
    }
    cout << cnt;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}