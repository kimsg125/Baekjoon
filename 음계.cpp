#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string S;
    getline(cin, S);
    if (S=="1 2 3 4 5 6 7 8") cout << "ascending";
    else if (S=="8 7 6 5 4 3 2 1") cout << "descending";
    else cout << "mixed";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}