#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    while(true)
    {
        cin >> a >> b >> c;
        if (a==0) break;
        if (a>=b+c || b>=a+c || c>=a+b) cout << "Invalid\n";
        else if (a==b && b==c) cout << "Equilateral\n";
        else if (a==b || b==c || c==a) cout << "Isosceles\n";
        else cout << "Scalene\n";
    }
}

int main() {
    solve();
}