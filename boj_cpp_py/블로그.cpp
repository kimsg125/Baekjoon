#include <bits/stdc++.h>
using namespace std;

int N, X;

void solve() {
    cin >> N >> X;
    vector<int> v(N,0);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    int begin_sum=0;
    for (int i = 0; i < X; i++)
    {
        begin_sum+=v[i];
    }
    int max_sum=begin_sum, max_cnt=1;
    for (int i = X; i < N; i++)
    {
        begin_sum+=v[i];
        begin_sum-=v[i-X];
        if (begin_sum==max_sum) max_cnt++;
        if (begin_sum>max_sum)
        {
            max_sum=begin_sum;
            max_cnt=1;
        }
    }
    if (max_sum==0) cout << "SAD";
    else cout << max_sum << '\n' << max_cnt;
}

int main() {
    solve();
}