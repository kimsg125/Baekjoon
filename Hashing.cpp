#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int L, a, sum=0;
    string S;
    cin >> L >> S;
    for (int i = 0; i < L; i++)
    {
        a=S[i]-'a'+1;
        for (int j = 0; j < i; j++)
        {
            a*=31;
            if (a>1234567891) a%=1234567891;
        }
        sum+=a;
    }
    cout << sum%1234567891;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}