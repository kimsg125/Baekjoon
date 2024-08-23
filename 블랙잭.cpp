#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int N, M, n, max=0;
    vector<int> A;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        A.push_back(n);
    }
    for (int i = 0; i < N-2; i++)
    {
        for (int j = i+1; j < N-1; j++)
        {
            for (int k = j+1; k < N; k++)
            {
                int sum=A[i]+A[j]+A[k];
                if (sum<=M && sum>max) max=sum;
            }
        }
    }
    cout << max;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}