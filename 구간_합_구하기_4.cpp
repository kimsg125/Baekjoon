<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

void solve() {
    int N, n, M, a, b, sum=0;
    vector<int> A;
    cin >> N >> M;
    A.push_back(0);
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        sum+=n;
        A.push_back(sum);
    }
    for (int i = 0; i < M; i++)
    {
        cin >> a >> b;
        cout << A[b]-A[a-1] << '\n';
    }
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

void solve() {
    int N, n, M, a, b, sum=0;
    vector<int> A;
    cin >> N >> M;
    A.push_back(0);
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        sum+=n;
        A.push_back(sum);
    }
    for (int i = 0; i < M; i++)
    {
        cin >> a >> b;
        cout << A[b]-A[a-1] << '\n';
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
