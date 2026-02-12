#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, a, B, C;
string s;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void solve() {
    cin >> N;
    int sum = 0;
    vector<double> A(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        A[i] = a;
    }
    cin >> B >> C;
    for (int i = 0; i < N; i++)
    {
        if (A[i] <= B) sum++;
        else
        {
            A[i]-=B;
            sum+=(ceil(A[i]/C)+1);
        }
    }
    cout << sum;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
