#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

void solve() {
    int N, M, B, n, max=0, min=256;
    cin >> N >> M >> B;
    vector<vector<int>> v(N,vector<int> (M,0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> n;
            if (n>max) max=n;
            if (n<min) min=n;
            v[i][j]=n;
        }
    }
    int h=(min+max)/2, t=0;
    while (h!=max)
    {
        int t1=0, t2=0, s1=0, s2=0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (v[i][j]>h) t1+=2*(v[i][j]-h);
                else t2+=(h-v[i][j]);
                if (v[i][j]>h+1) s1+=2*(v[i][j]-h-1);
                else s2+=(h+1-v[i][j]);
            }
        }
        if (s1/2+B-s2<0 || t1+t2<s1+s2)
        {
            max=h;
            h=(min+max)/2;
            t=t1+t2;
        }
        else
        {
            min=h;
            h++;
            t=s1+s2;
        }
    }
    cout << t << ' ' << h;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}
