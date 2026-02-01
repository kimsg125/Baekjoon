<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string S, N;
    cin >> S;
    N = S;
    reverse(S.begin(), S.end());
    if (S == N) cout << '1';
    else cout << '0';
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
=======
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string S, N;
    cin >> S;
    N = S;
    reverse(S.begin(), S.end());
    if (S == N) cout << '1';
    else cout << '0';
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
}