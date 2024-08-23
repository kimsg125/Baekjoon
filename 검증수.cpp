#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int a, n=0;
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        n+=pow(a,2);
    }
    cout << n%10;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}