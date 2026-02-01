<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int H, W, N, n=1;
    cin >> H >> W >> N;
    if (N%H!=0) cout << N%H;
    else cout << H;
    while (H*n<N) n++;
    if (n<10) cout << '0' << n << '\n';
    else cout << n << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) solve();
=======
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int H, W, N, n=1;
    cin >> H >> W >> N;
    if (N%H!=0) cout << N%H;
    else cout << H;
    while (H*n<N) n++;
    if (n<10) cout << '0' << n << '\n';
    else cout << n << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) solve();
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
}