#include <bits/stdc++.h>
using namespace std;

#define int long long

int N;

void solve() {
    cin >> N;
    vector<int> city_len(N-1,0), city_cost(N,0), city_charge(N,0);
    for (int i = 0; i < N-1; i++) cin >> city_len[i];
    int bef;
    city_charge[0]=1;
    for (int i = 0; i < N; i++)
    {
        cin >> city_cost[i];
        if (i==0) bef=city_cost[0];
        if (i!=0 && city_cost[i]<bef)
        {
            bef=city_cost[i];
            city_charge[i]=1;
        }
    }
    int sum=0, len_sum=0;
    for (int i = N-2; i >= 0; i--)
    {
        len_sum+=city_len[i];
        if (city_charge[i]==1)
        {
            sum+=len_sum*city_cost[i];
            len_sum=0;
        }
    }
    cout << sum;
}

int32_t main() {
    solve();
}