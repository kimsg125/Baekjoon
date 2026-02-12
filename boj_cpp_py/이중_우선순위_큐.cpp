#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, x;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
vector<int> v;

void solve() {
    priority_queue<int,vector<int>,less<>> maxq;
    priority_queue<int,vector<int>,greater<>> minq;
    multiset<int> ms;
    multiset<int>::iterator it;
    char c;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> c >> x;
        if (c=='I')
        {
            maxq.push(x);
            minq.push(x);
            ms.insert(x);
        }
        else if (x==1)
        {
            while (!maxq.empty() && ms.count(maxq.top())==0) maxq.pop();
            if (!maxq.empty())
            {
                it=ms.find(maxq.top());
                ms.erase(it);
                maxq.pop();
            }
        }
        else if (x==-1)
        {
            while (!minq.empty() && ms.count(minq.top())==0) minq.pop();
            if (!minq.empty())
            {
                it=ms.find(minq.top());
                ms.erase(it);
                minq.pop();
            }
        }
        while (!maxq.empty() && ms.count(maxq.top())==0) maxq.pop();
        while (!minq.empty() && ms.count(minq.top())==0) minq.pop();
    }
    if (ms.empty()) cout << "EMPTY" << '\n';
    else cout << maxq.top() << ' ' << minq.top() << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) solve();
    //solve();
}
