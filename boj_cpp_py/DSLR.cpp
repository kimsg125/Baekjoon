#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,string> pis;

int A, B;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
vector<int> v(10000,0);
deque<pis> q;

void DSLR(int n, int m) {
    string s="";
    q.push_back(make_pair(n,s));
    v[n]=1;
    while (!q.empty())
    {
        n=q.front().first;
        s=q.front().second;
        q.pop_front();
        if (n==m)
        {
            cout << s << '\n';
            break;
        }
        int D=(2*n)%10000;
        if (v[D]==0)
        {
            q.push_back(make_pair(D,s+"D"));
            v[D]=1;
        }
        if (n==0 && v[9999]==0)
        {
            q.push_back(make_pair(9999,s+"S"));
            v[9999]=1;
        }
        else if (n!=0 && v[n-1]==0)
        {
            q.push_back(make_pair(n-1,s+"S"));
            v[n-1]=1;
        }
        int L=(n%1000)*10+n/1000;
        if (v[L]==0)
        {
            q.push_back(make_pair(L,s+"L"));
            v[L]=1;
        }
        int R=(n%10)*1000+n/10;
        if (v[R]==0)
        {
            q.push_back(make_pair(R,s+"R"));
            v[R]=1;
        }
    }
    q.clear();
}

void solve() {
    cin >> A >> B;
    for (int i = 0; i < 10000; i++) v[i]=0;
    DSLR(A,B);
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) solve();
    //solve();
}
