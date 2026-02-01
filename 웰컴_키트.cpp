#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int N, T, P, sum=0;
    vector<int> A(6,0);
    cin >> N;
    for (int i = 0; i < 6; i++) cin >> A[i];
    cin >> T >> P;
    for (int i = 0; i < 6; i++)
    {
        if (A[i]%T==0) sum+=A[i]/T;
        else sum+=(A[i]/T+1);
    }
    cout << sum << '\n' << N/P << ' ' << N%P;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}