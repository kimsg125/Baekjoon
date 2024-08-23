#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<string,int> pii;

void solve() {
    int N, M;
    string S;
    map<string, int> A;
    vector<string> B;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> S;
        A[S]=i+1;
        B.push_back(S);
    }
    for (int i = 0; i < M; i++)
    {
        cin >> S;
        if (isdigit(S[0])) cout << B[stoi(S)-1] << '\n';
        else cout << A[S] << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
