#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

void solve() {
    int M, a;
    string S;
    vector<int> A(20,0);
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> S;
        if (S=="add")
        {
            cin >> a;
            A[a-1]=1;
        }
        else if (S=="remove")
        {
            cin >> a;
            A[a-1]=0;
        }
        else if (S=="check")
        {
            cin >> a;
            cout << A[a-1] << '\n';
        }
        else if (S=="toggle")
        {
            cin >> a;
            A[a-1]^=1;
        }
        else if (S=="all") for (int j = 0; j < 20; j++) A[j]=1;
        else if (S=="empty") for (int j = 0; j < 20; j++) A[j]=0;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
