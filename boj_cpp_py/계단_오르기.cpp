<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

vector<int> A, B(300,0);

int stair(int n) {
    if (B[n]) return B[n];
    if (n==0) return B[n]=A[0];
    if (n==1) return B[n]=A[0]+A[1];
    if (n==2) return B[n]=max(A[0],A[1])+A[2];
    return B[n]=max(stair(n-3)+A[n-1],stair(n-2))+A[n];
}

void solve() {
    int N, n;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        A.push_back(n);
    }
    cout << stair(N-1);
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

vector<int> A, B(300,0);

int stair(int n) {
    if (B[n]) return B[n];
    if (n==0) return B[n]=A[0];
    if (n==1) return B[n]=A[0]+A[1];
    if (n==2) return B[n]=max(A[0],A[1])+A[2];
    return B[n]=max(stair(n-3)+A[n-1],stair(n-2))+A[n];
}

void solve() {
    int N, n;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        A.push_back(n);
    }
    cout << stair(N-1);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
