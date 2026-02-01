<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string S;
    vector<int> check;
    while (getline(cin, S))
    {
        if (S.front()=='.') break;
        bool result=true;
        check.clear();
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i]=='(')
            {
                check.push_back(1);
            }
            else if (S[i]==')')
            {
                if (check.back()==1) check.pop_back();
                else result=false;
            }
            else if (S[i]=='[')
            {
                check.push_back(2);
            }
            else if (S[i]==']')
            {
                if (check.back()==2) check.pop_back();
                else result=false;
            }
            if (result==false) break;
        }
        if (result==false || check.size()!=0) cout << "no" << '\n';
        else cout << "yes" << '\n';
    }
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
    string S;
    vector<int> check;
    while (getline(cin, S))
    {
        if (S.front()=='.') break;
        bool result=true;
        check.clear();
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i]=='(')
            {
                check.push_back(1);
            }
            else if (S[i]==')')
            {
                if (check.back()==1) check.pop_back();
                else result=false;
            }
            else if (S[i]=='[')
            {
                check.push_back(2);
            }
            else if (S[i]==']')
            {
                if (check.back()==2) check.pop_back();
                else result=false;
            }
            if (result==false) break;
        }
        if (result==false || check.size()!=0) cout << "no" << '\n';
        else cout << "yes" << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
}