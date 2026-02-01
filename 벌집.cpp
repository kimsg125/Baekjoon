#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int N, cnt=0;
    cin >> N;
    while (N>1)
    {
        cnt++;
        N-=(6*cnt);
    }
    cout << cnt+1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}