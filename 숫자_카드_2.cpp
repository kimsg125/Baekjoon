#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int N, M, n;
    map<int,int> A;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        if (A.find(n)==A.end()) A[n]=1;
        else A[n]++;
    }
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> n;
        if (A.find(n)==A.end()) cout << "0 ";
        else cout << A[n] << " ";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}