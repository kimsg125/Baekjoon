<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string S;
    int cnt=0;
    bool flag=true;
    cin >> S;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i]=='(') cnt++;
        else if (S[i]==')') cnt--;
        if (cnt<0)
        {
            flag=false;
            break;
        }
    }
    if (cnt!=0 || flag==false) cout << "NO" << '\n';
    else cout << "YES" << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) solve();
=======
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string S;
    int cnt=0;
    bool flag=true;
    cin >> S;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i]=='(') cnt++;
        else if (S[i]==')') cnt--;
        if (cnt<0)
        {
            flag=false;
            break;
        }
    }
    if (cnt!=0 || flag==false) cout << "NO" << '\n';
    else cout << "YES" << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) solve();
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
}