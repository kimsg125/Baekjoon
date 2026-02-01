#include <bits/stdc++.h>
using namespace std;

#define int long long

int N;

void solve() {
    cin >> N;
    vector<int> v(N,0);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int cnt=0;
    for (int i = 0; i < N; i++)
    {
        int low=0, high=N-1;
        while (low<high)
        {
            int sum=v[low]+v[high];
            if (sum==v[i])
            {
                if (low==i) low++;
                else if (high==i) high--;
                else
                {
                    cnt++;
                    break;
                }
            }
            else if (sum<v[i]) low++;
            else high--;
        }
    }
    cout << cnt;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}