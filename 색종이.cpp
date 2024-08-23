#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    vector<vector<int>> A(100, vector<int> (100, 1));
    int N, a, b, count=0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                A[a+j][b+k]*=0;
            }
        }
    }
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (A[j][i] == 0) count++;
        }
    }
    cout << count;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}