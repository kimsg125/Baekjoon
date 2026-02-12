#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, n;

void solve() {
    cin >> N;
    cin >> n;
    int a=-1, b=n, ap=-1, bp=0, cnt=1, max=1;
    for (int i = 1; i < N; i++)
    {
        cin >> n;
        if (n==a)
        {
            int tmp=a;
            a=b;
            b=tmp;
            ap=bp;
            bp=i;
            cnt++;
        }
        else if (n==b)
        {
            bp=i;
            cnt++;
        }
        else
        {
            if (cnt>max) max=cnt;
            cnt=i-ap;
            a=b;
            b=n;
            ap=bp;
            bp=i;
        }
    }
    if (cnt>max) max=cnt;
    cout << max;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
