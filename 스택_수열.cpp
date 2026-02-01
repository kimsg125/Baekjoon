#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

void solve() {
    int n, a, cnt=0;
    bool flag=true;
    vector<int> A, B;
    cin >> n;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        A.push_back(i);
        B.push_back(1);
    }
    cnt=a;
    A.pop_back();
    B.push_back(0);
    for (int i = 0; i < n-1; i++)
    {
        cin >> a;
        if (a>cnt)
        {
            for (int j = cnt+1; j <= a; j++)
            {
                A.push_back(j);
                B.push_back(1);
            }
            cnt=a;
            A.pop_back();
            B.push_back(0);
        }
        else if (A.back()==a)
        {
            A.pop_back();
            B.push_back(0);
        }
        else
        {
            flag=false;
            break;
        }
    }
    if (flag==false) cout << "NO";
    else
    {
        for (int i = 0; i < 2*n; i++)
        {
            if (B[i]==1) cout << "+\n";
            else cout << "-\n";
        }
        
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
