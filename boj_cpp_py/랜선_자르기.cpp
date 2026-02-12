<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

void solve() {
    int K, N, n, a, sum=0, cnt=0;
    vector<int> A, B;
    cin >> K >> N;
    for (int i = 0; i < K; i++)
    {
        cin >> n;
        sum+=n;
        A.push_back(n);
    }
    int max=sum/N;
    for (int i = 0; i < K; i++) cnt+=A[i]/max;
    while (cnt<N)
    {
        cnt=0;
        int min=max;
        for (int i = 0; i < K; i++)
        {
            a=ceil((double)(max-A[i]%max)/(A[i]/max+1));
            if (a<min) min=a;
        }
        max-=min;
        for (int i = 0; i < K; i++) cnt+=A[i]/max;
    }
    cout << max;
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
    int K, N, n, a, sum=0, cnt=0;
    vector<int> A, B;
    cin >> K >> N;
    for (int i = 0; i < K; i++)
    {
        cin >> n;
        sum+=n;
        A.push_back(n);
    }
    int max=sum/N;
    for (int i = 0; i < K; i++) cnt+=A[i]/max;
    while (cnt<N)
    {
        cnt=0;
        int min=max;
        for (int i = 0; i < K; i++)
        {
            a=ceil((double)(max-A[i]%max)/(A[i]/max+1));
            if (a<min) min=a;
        }
        max-=min;
        for (int i = 0; i < K; i++) cnt+=A[i]/max;
    }
    cout << max;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
