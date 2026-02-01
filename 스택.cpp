<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int N, n;
    string S;
    vector<int> A;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> S;
        if (S=="push")
        {
            cin >> n;
            A.push_back(n);
        }
        else if (S=="pop")
        {
            if (A.size()==0) cout << -1 << '\n';
            else 
            {
                cout << A.back() << '\n';
                A.pop_back();
            }
        }
        else if (S=="size") cout << A.size() << '\n';
        else if (S=="empty")
        {
            if (A.size()==0) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if (S=="top")
        {
            if (A.size()==0) cout << -1 << '\n';
            else cout << A.back() << '\n';
        }
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
    int N, n;
    string S;
    vector<int> A;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> S;
        if (S=="push")
        {
            cin >> n;
            A.push_back(n);
        }
        else if (S=="pop")
        {
            if (A.size()==0) cout << -1 << '\n';
            else 
            {
                cout << A.back() << '\n';
                A.pop_back();
            }
        }
        else if (S=="size") cout << A.size() << '\n';
        else if (S=="empty")
        {
            if (A.size()==0) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if (S=="top")
        {
            if (A.size()==0) cout << -1 << '\n';
            else cout << A.back() << '\n';
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
}