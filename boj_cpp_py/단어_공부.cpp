<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string S;
    cin >> S;
    vector<int> a(26, 0);
    for (int i = 0; i < S.size(); i++)
    {
        S[i] = toupper(S[i]);
        a[S[i] - 'A']++;
    };
    int max = 0;
    char b;
    bool multi = false;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] > max) {
            max = a[i];
            b = 'A'+i;
            multi = false;
        }
        else if (a[i] == max) multi = true;
    }
    if (multi) cout << '?';
    else cout << b;
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
    vector<int> a(26, 0);
    for (int i = 0; i < S.size(); i++)
    {
        S[i] = toupper(S[i]);
        a[S[i] - 'A']++;
    };
    int max = 0;
    char b;
    bool multi = false;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] > max) {
            max = a[i];
            b = 'A'+i;
            multi = false;
        }
        else if (a[i] == max) multi = true;
    }
    if (multi) cout << '?';
    else cout << b;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
}