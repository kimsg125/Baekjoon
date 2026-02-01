#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MAX 9223372036854775807;
typedef pair<int,int> pii;

int N, e;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void solve() {
    cin >> N;
    priority_queue<int, vector<int>, less<int>> h;
    priority_queue<int, vector<int>, greater<int>> l;
    vector<int> v(N);
    int max, min, sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> e;
        h.push(e);
        l.push(e);
        v[i] = e;
    }
    while (h.top() - l.top() > 17)
    {
        max = h.top();
        h.pop();
        h.push(max - 1);
        min = l.top();
        l.pop();
        l.push(min + 1);
    }
    for (int i = 0; i < N; i++)
    {
        if (v[i] > h.top()) sum += ((v[i] - h.top()) * (v[i] - h.top()));
        if (v[i] < l.top()) sum += ((l.top() - v[i]) * (l.top() - v[i]));
    }
    cout << sum;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
