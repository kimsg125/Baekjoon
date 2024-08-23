#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int N, i=666;
    cin >> N;
    vector<int> A;
    while (A.size()<10000)
    {
        string S=to_string(i);
        if (S.find("666")!=string::npos) A.push_back(i);
        i++;
    }
    cout << A[N-1];
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}