<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int N, cnt=0;
    cin >> N;
    if (N%5==0) cout << N/5;
    else if ((N%5)%3==0) cout << N/5+1;
    else if ((N%5)%3==1 && N>=6) cout << N/5+(N%5+2)/3;
    else if ((N%5)%3==2 && N>=12) cout << N/5+(N%5+4)/3;
    else cout << -1;
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
    int N, cnt=0;
    cin >> N;
    if (N%5==0) cout << N/5;
    else if ((N%5)%3==0) cout << N/5+1;
    else if ((N%5)%3==1 && N>=6) cout << N/5+(N%5+2)/3;
    else if ((N%5)%3==2 && N>=12) cout << N/5+(N%5+4)/3;
    else cout << -1;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
}