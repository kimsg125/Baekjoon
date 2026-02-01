#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int N, num, cnt=0;
    cin >> N;
    vector<int> A(1001,1);
    A[1]=0;
    for (int i = 2; i < 1001; i++)
    {
        if (A[i]==0) continue;
        int j=2*i;
        while (j<=1000)
        {
            A[j]=0;
            j+=i;
        }
    }
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        if (A[num]==1) cnt++;
    }
    cout << cnt;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}