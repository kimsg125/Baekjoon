<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

vector<int> A(90, 0);

int fi(int n) {
    if (n==0 || n==1)
    {
        A[n]=n;
        return n;
    }
    else if (A[n]) return A[n];
    return A[n]=fi(n-1)+fi(n-2);
}

void solve() {
    int n;
    cin >> n;
    cout << fi(n);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
=======
#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

vector<int> A(90, 0);

int fi(int n) {
    if (n==0 || n==1)
    {
        A[n]=n;
        return n;
    }
    else if (A[n]) return A[n];
    return A[n]=fi(n-1)+fi(n-2);
}

void solve() {
    int n;
    cin >> n;
    cout << fi(n);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
