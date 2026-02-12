#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, M;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
vector<int> v;

void solve() {
    int sum=0, cnt=0, ind=-3;
    string s;
    cin >> N >> M >> s;
    for (int i = 0; i < M; i++)
    {
        if (s[i]=='I')
        {
            if (i==ind+2)
            {
                cnt++;
                if (cnt>=N) sum++;
            }
            else cnt=0;
            ind=i;
        }
    }
    cout << sum;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
