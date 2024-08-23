#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int N, M;
    string S;
    cin >> N >> M;
    vector<vector<int>> A(N,vector<int> (M,0));
    vector<int> C;
    for (int i = 0; i < N; i++)
    {
        cin >> S;
        for (int j = 0; j < M; j++)
        {
            if ((i+j)%2==0 && S[j]!='B') A[i][j]=1;
            if ((i+j)%2==1 && S[j]!='W') A[i][j]=1;
        }
    }
    for (int i = 0; i < N-7; i++)
    {
        for (int j = 0; j < M-7; j++)
        {
            int cnt=0;
            for (int a = 0; a < 8; a++) for (int b = 0; b < 8; b++) cnt+=A[i+a][j+b];
            if (cnt>32) C.push_back(64-cnt);
            else C.push_back(cnt);
        }
    }
    cout << *min_element(C.begin(),C.end());
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}