<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

vector<pii> v2;

void square(vector<vector<int>> &v, int N, int n, int m) {
    int c=v[N*n][N*m];
    bool flag=true;
    for (int i = N*n; i < N*(n+1); i++)
    {
        for (int j = N*m; j < N*(m+1); j++)
        {
            if (c!=v[i][j])
            {
                flag=false;
                square(v,N/2,2*n,2*m);
                square(v,N/2,2*n+1,2*m);
                square(v,N/2,2*n,2*m+1);
                square(v,N/2,2*n+1,2*m+1);
                break;
            }
        }
        if (!flag) break;
    }
    if (flag) v2.push_back(make_pair(N*n,N*m));
}

void solve() {
    int N, n, num0=0, num1=0;
    cin >> N;
    vector<vector<int>> v(N,vector<int>(N,0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> n;
            if (n==1) v[i][j]=1;
        }
    }
    square(v,N,0,0);
    for (int i = 0; i < v2.size(); i++)
    {
        if (v[v2[i].first][v2[i].second]==0) num0++;
        else num1++;
    }
    cout << num0 << '\n' << num1;
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

vector<pii> v2;

void square(vector<vector<int>> &v, int N, int n, int m) {
    int c=v[N*n][N*m];
    bool flag=true;
    for (int i = N*n; i < N*(n+1); i++)
    {
        for (int j = N*m; j < N*(m+1); j++)
        {
            if (c!=v[i][j])
            {
                flag=false;
                square(v,N/2,2*n,2*m);
                square(v,N/2,2*n+1,2*m);
                square(v,N/2,2*n,2*m+1);
                square(v,N/2,2*n+1,2*m+1);
                break;
            }
        }
        if (!flag) break;
    }
    if (flag) v2.push_back(make_pair(N*n,N*m));
}

void solve() {
    int N, n, num0=0, num1=0;
    cin >> N;
    vector<vector<int>> v(N,vector<int>(N,0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> n;
            if (n==1) v[i][j]=1;
        }
    }
    square(v,N,0,0);
    for (int i = 0; i < v2.size(); i++)
    {
        if (v[v2[i].first][v2[i].second]==0) num0++;
        else num1++;
    }
    cout << num0 << '\n' << num1;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
