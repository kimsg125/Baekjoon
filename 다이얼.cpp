<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string S;
    cin >> S;
    int n = 0;
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == 'A' || S[i] == 'B' || S[i] == 'C') n+=3;
        else if (S[i] == 'D' || S[i] == 'E' || S[i] == 'F') n+=4;
        else if (S[i] == 'G' || S[i] == 'H' || S[i] == 'I') n+=5;
        else if (S[i] == 'J' || S[i] == 'K' || S[i] == 'L') n+=6;
        else if (S[i] == 'M' || S[i] == 'N' || S[i] == 'O') n+=7;
        else if (S[i] == 'P' || S[i] == 'Q' || S[i] == 'R' || S[i] == 'S') n+=8;
        else if (S[i] == 'T' || S[i] == 'V' || S[i] == 'U') n+=9;
        else if (S[i] == 'W' || S[i] == 'X' || S[i] == 'Y' || S[i] == 'Z') n+=10;
    }
    cout << n;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
=======
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string S;
    cin >> S;
    int n = 0;
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == 'A' || S[i] == 'B' || S[i] == 'C') n+=3;
        else if (S[i] == 'D' || S[i] == 'E' || S[i] == 'F') n+=4;
        else if (S[i] == 'G' || S[i] == 'H' || S[i] == 'I') n+=5;
        else if (S[i] == 'J' || S[i] == 'K' || S[i] == 'L') n+=6;
        else if (S[i] == 'M' || S[i] == 'N' || S[i] == 'O') n+=7;
        else if (S[i] == 'P' || S[i] == 'Q' || S[i] == 'R' || S[i] == 'S') n+=8;
        else if (S[i] == 'T' || S[i] == 'V' || S[i] == 'U') n+=9;
        else if (S[i] == 'W' || S[i] == 'X' || S[i] == 'Y' || S[i] == 'Z') n+=10;
    }
    cout << n;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
}