#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int A, B, C;
    cin >> A >> B >> C;
    if (B<10) cout << A+B-C << '\n' << A*10+B-C;
    else if (B<100) cout << A+B-C << '\n' << A*100+B-C;
    else if (B<1000) cout << A+B-C << '\n' << A*1000+B-C;
    else cout << A+B-C << '\n' << A*10000+B-C;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}