#include <bits/stdc++.h>
using namespace std;

int H, W, n;

void solve() {
    cin >> H >> W;
    vector<int> v(W,0);
    int max_h=0;
    for (int i = 0; i < W; i++)
    {
        cin >> n;
        if (n>max_h) max_h=n;
        v[i]=n;
    }
    int sum=0, max_l=0, max_r=0, left, right;
    for (int i = 0; i < W; i++)
    {
        if (v[i]==max_h)
        {
            left=i;
            break;
        }
        if (v[i]>max_l) max_l=v[i];
        else sum+=max_l-v[i];
    }
    for (int i = W-1; i >= 0; i--)
    {
        if (v[i]==max_h)
        {
            right=i;
            break;
        }
        if (v[i]>max_r) max_r=v[i];
        else sum+=max_r-v[i];
    }
    for (int i = left; i < right; i++)
    {
        sum+=max_h-v[i];
    }
    cout << sum;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}