#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef pair<int,int> pii;

int N;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
deque<int> q;

void solve() {
    string s, S;
    int sum;
    bool flag=true, err=false;
    cin >> s >> N >> S;
    for (int i = 0; i < S.size(); i++)
    {
        if (q.size()==N) break;
        if (S[i]=='[') sum=0;
        else if (S[i]==',' || S[i]==']')
        {
            q.push_back(sum);
            sum=0;
        }
        else
        {
            sum*=10;
            sum+=S[i]-'0';
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='R') flag=!flag;
        else
        {
            if (q.empty())
            {
                cout << "error";
                err=true;
                break;
            }
            if (flag) q.pop_front();
            else q.pop_back();
        }
    }
    if (!err)
    {
        cout << '[';
        for (int i = 0; i < q.size(); i++)
        {
            if (flag) cout << q[i];
            else cout << q[q.size()-1-i];
            if (i!=q.size()-1) cout << ',';
        }
        cout << ']';
    }
    cout << '\n';
    q.clear();
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) solve();
    //solve();
}
