#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string S;
    cin >> S;
    cout << S[0] << S[S.length()-1] << '\n';
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) solve();
}