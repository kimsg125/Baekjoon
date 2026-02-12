<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

//#define int long long

void solve() {
    int N, n, cnt=0;
    cin >> N;
    vector<int> A(10000,0);
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        A[n-1]++;
    }
    for (int i = 0; i < 10000; i++)
    {
        if (A[i]!=0)
        {
            cout << i+1 << '\n';
            A[i]--;
            i--;
            cnt++;
        }
        if(cnt==N) break;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
=======
#include <bits/stdc++.h>
using namespace std;

//#define int long long

void solve() {
    int N, n, cnt=0;
    cin >> N;
    vector<int> A(10000,0);
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        A[n-1]++;
    }
    for (int i = 0; i < 10000; i++)
    {
        if (A[i]!=0)
        {
            cout << i+1 << '\n';
            A[i]--;
            i--;
            cnt++;
        }
        if(cnt==N) break;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
}