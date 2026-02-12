#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N, n;
string s;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void solve() {
    cin >> N;
    cin >> s;
    double a, b;
    vector<double> v(N,0);
    vector<double> cal;
    for (int i = 0; i < N; i++)
    {
        cin >> n;
        v[i] = n;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
        {
            b = cal.back();
            cal.pop_back();
            a = cal.back();
            cal.pop_back();
            if (s[i]=='+') cal.push_back(a+b);
            if (s[i]=='-') cal.push_back(a-b);
            if (s[i]=='*') cal.push_back(a*b);
            if (s[i]=='/') cal.push_back(a/b);
        }
        else
        {
            cal.push_back(v[s[i]-'A']);
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << cal[0];
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    //int T;
    //cin >> T;
    //for (int i = 0; i < T; i++) solve();
    solve();
}
