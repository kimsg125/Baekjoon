<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int N, n, cnt=0;
    cin >> N;
    vector<int> A;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        A.push_back(n);
    }
    sort(A.begin(), A.end());
    for (int i = 0; i < N; i++) cout << A[i] << '\n';
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
    int N, n, cnt=0;
    cin >> N;
    vector<int> A;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        A.push_back(n);
    }
    sort(A.begin(), A.end());
    for (int i = 0; i < N; i++) cout << A[i] << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
}