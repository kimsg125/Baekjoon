<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int A, B, V;
    cin >> A >> B >> V;
    if ((V-A)%(A-B)==0) cout << (V-A)/(A-B)+1;
    else cout << (V-A)/(A-B)+2;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
=======
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int A, B, V;
    cin >> A >> B >> V;
    if ((V-A)%(A-B)==0) cout << (V-A)/(A-B)+1;
    else cout << (V-A)/(A-B)+2;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
}