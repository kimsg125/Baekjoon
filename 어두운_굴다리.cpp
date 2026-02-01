#include <bits/stdc++.h>
using namespace std;

int N, M, n;

void solve() {
    cin >> N >> M;
    int max_len=0, bef=0;
    for (int i = 0; i < M; i++)
    {
        cin >> n;
        if (i==0) max_len=n;
        else
        {
            int mid_len=n-bef;
            if (mid_len%2==1) mid_len++;
            if (mid_len/2>max_len) max_len=mid_len/2;
        }
        bef=n;
    }
    if (N-bef>max_len) max_len=N-bef;
    cout << max_len;
}

int main() {
    solve();
}