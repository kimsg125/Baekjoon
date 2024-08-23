#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

void solve() {
    int n;
    vector<int> A;
    set<int> B;
    cin >> n;
    for (int i = 1; i < 224; i++)
    {
        if (i*i>n) break;
        A.push_back(i*i);
    }
    if (A.back()==n) cout << 1;
    else
    {
        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < A.size(); j++)
            {
                if (i+j>n) break;
                B.insert(A[i]+A[j]);
            }
        }
        if (B.find(n)!=B.end()) cout << 2;
        else
        {
            bool flag=false;
            for (int i = 0; i < A.size(); i++)
            {
                if (B.find(n-A[i])!=B.end())
                {
                    flag=true;
                    break;
                }
            }
            if (flag==true) cout << 3;
            else cout << 4;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
