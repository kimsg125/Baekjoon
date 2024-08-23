#include <bits/stdc++.h>
using namespace std;

#define int long long

bool cmp(string a, string b) {
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }
    else {
        return a < b;
    }
}

void solve() {
    int N;
    string n;
    cin >> N;
    vector<string> A;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        A.push_back(n);
    }
    sort(A.begin(),A.end(),cmp);
    A.erase(unique(A.begin(),A.end()), A.end());
    int i=0;
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << '\n';
    }
    
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}