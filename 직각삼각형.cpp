#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int A, B, C;
    cin >> A >> B >> C;
    while (A!=0 && B!=0 && C!=0)
    {
        if (C>A && C>B)
        {
            if (A*A+B*B==C*C) cout << "right" << '\n';
            else cout << "wrong" << '\n';
        }
        else if (B>A && B>C)
        {
            if (A*A+C*C==B*B) cout << "right" << '\n';
            else cout << "wrong" << '\n';
        }
        else
        {
            if (B*B+C*C==A*A) cout << "right" << '\n';
            else cout << "wrong" << '\n';
        }
        cin >> A >> B >> C;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}