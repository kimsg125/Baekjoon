#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int N, K, k=0;
    cin >> N >> K;
    vector<int> A;
    for (int i = 0; i < N; i++) A.push_back(i+1);
    cout << "<";
    for (int i = 0; i < N; i++)
    {
        k=(k+K-1)%A.size();
        cout << A[k];
        A.erase(A.begin()+k);
        if (A.size()!=0) cout << ", ";
    }
    cout << ">";
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}