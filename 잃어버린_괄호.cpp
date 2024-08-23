#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

void solve() {
    int n, sum=0, total=0;
    bool flag=true;
    string S;
    cin >> S;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i]!='+' && S[i]!='-')
        {
            sum*=10;
            sum+=(S[i]-'0');
        }
        else if (!flag)
        {
            total-=sum;
            sum=0;
        }
        else if (S[i]=='-')
        {
            total+=sum;
            sum=0;
            flag=false;
        }
        else
        {
            total+=sum;
            sum=0;
        }
    }
    if (!flag) total-=sum;
    else total+=sum;
    cout << total;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
