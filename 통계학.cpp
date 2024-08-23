#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

void solve() {
    int N, n, cnt=0;
    double sum=0;
    vector<int> A;
    vector<pii> B;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        sum+=n;
        A.push_back(n);
        bool flag=false;
        for (int j = 0; j < B.size(); j++)
        {
            if (n==B[j].second) 
            {
                B[j].first++;
                flag=true;
                break;
            }
        }
        if (flag==false) B.push_back(make_pair(1,n));
    }
    cout << (int)round(sum/N) << '\n';
    sort(A.begin(),A.end());
    cout << A[(N-1)/2] << '\n';
    sort(B.begin(),B.end());
    int max=B.back().first, i=B.size()-1;
    while (B[i].first==max)
    {
        cnt++;
        i--;
    }
    if (cnt==1) cout << B.back().second << '\n';
    else cout << B[B.size()-cnt+1].second << '\n';
    cout << A.back()-A.front();
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}