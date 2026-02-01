#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string N;
    cin >> N;
    while(N!="0")
    {
        bool flag=true;
        for (int i = 0; i < N.size()/2; i++)
        {
            if (N[i]!=N[N.size()-1-i])
            {
                flag=false;
                break;
            }
        }
        if (flag) cout << "yes" << '\n';
        else cout << "no" << '\n';
        cin >> N;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}