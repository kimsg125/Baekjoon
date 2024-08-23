#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

vector<int> C(31,0);

int combination(vector<int> B, int n) {
    if (n==B.size()) return 1;
    if (C[n]) return C[n];
    return C[n]=B[n]*combination(B,n+1)+combination(B,n+1);
}

void solve() {
    int n, m;
    string S1, S2;
    map<string,int> A;
    vector<int> B;
    for (int i = 0; i < 31; i++) C[i]=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> S1 >> S2;
        A[S2]++;
    }
    // for (auto i = A.begin(); i != A.end(); i++) B.push_back(i->second);
    for (auto K : A) B.push_back(K.second);
    cout << combination(B,0)-1 << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) solve();
}
