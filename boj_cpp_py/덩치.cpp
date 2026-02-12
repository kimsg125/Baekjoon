<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int N, a, b;
    cin >> N;
    vector<int> A,B;
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        A.push_back(a);
        B.push_back(b);
    }
    for (int i = 0; i < N; i++)
    {
        int cnt=0;
        for (int j = 0; j < N; j++)
        {
            if (i==j) continue;
            if (A[j]>A[i] && B[j]>B[i]) cnt++;
        }
        cout << cnt+1 << ' ';
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
    int N, a, b;
    cin >> N;
    vector<int> A,B;
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        A.push_back(a);
        B.push_back(b);
    }
    for (int i = 0; i < N; i++)
    {
        int cnt=0;
        for (int j = 0; j < N; j++)
        {
            if (i==j) continue;
            if (A[j]>A[i] && B[j]>B[i]) cnt++;
        }
        cout << cnt+1 << ' ';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
}