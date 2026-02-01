#include <bits/stdc++.h>
using namespace std;

int N, n;

void solve() {
    cin >> N;
    vector<int> v(N,0);
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        int ind=0;
        while (n)
        {
            if (v[ind]==0) n--;
            ind++;
        }
        while (1)
        {
            if (v[ind]!=0) ind++;
            else break;
        }
        v[ind]=i+1;
    }
    for (int i = 0; i < N; i++)
    {
        cout << v[i] << ' ';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}