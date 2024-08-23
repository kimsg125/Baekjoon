#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int N, n = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        string S;
        cin >> S;
        vector<char> a, b;
        for (int j = 0; j < S.size(); j++)
        {
            a.push_back(S[j]);
            b.push_back(S[j]);
        }
        sort(a.begin(),a.end());
        a.erase(unique(a.begin(),a.end()),a.end());
        b.erase(unique(b.begin(),b.end()),b.end());
        if (a.size()==b.size()) n++;
    }
    cout << n;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}