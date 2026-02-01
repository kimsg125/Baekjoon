#include <bits/stdc++.h>
using namespace std;

#define int long long

int N, n;

void solve() {
    cin >> N;
    vector<int> v;
    int min=2000000000, a, b;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        int low=0, high=v.size()-1, mid=(low+high)/2;
        while (low<=high)
        {
            mid=(low+high)/2;
            if (abs(n+v[mid])<min)
            {
                min=abs(n+v[mid]);
                a=v[mid];
                b=n;
            }
            if (n+v[mid]>0) high=mid-1;
            else if (n+v[mid]==0) break;
            else low=mid+1;
        }
        v.push_back(n);
    }
    cout << a << ' ' << b;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}