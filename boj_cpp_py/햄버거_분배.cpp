#include <bits/stdc++.h>
using namespace std;

int N, K;
string s;

void solve() {
    cin >> N >> K >> s;
    vector<int> v(N,0);
    for (int i = 0; i < N; i++)
    {
        if (s[i]=='H') v[i]=1;
        else v[i]=2;
    }
    int cnt=0;
    for (int i = 0; i < N; i++)
    {
        if (v[i]==2)
        {
            for (int j = i-K; j <= i+K; j++)
            {
                if (j<0 || j>N-1) continue;
                if (v[j]==1)
                {
                    v[j]=0;
                    cnt++;
                    break;
                }
            }
            
        }
    }
    cout << cnt;
}

int main() {
    solve();
}