<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int N;
    list<int> A;
    cin >> N;
    for (int i = 0; i < N; i++) A.push_back(i+1);
    while (A.size()>1)
    {
        A.pop_front();
        int n = A.front();
        A.pop_front();
        A.push_back(n);
    }
    cout << A.front();
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
    int N;
    list<int> A;
    cin >> N;
    for (int i = 0; i < N; i++) A.push_back(i+1);
    while (A.size()>1)
    {
        A.pop_front();
        int n = A.front();
        A.pop_front();
        A.push_back(n);
    }
    cout << A.front();
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
}