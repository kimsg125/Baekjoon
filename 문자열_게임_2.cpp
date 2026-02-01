#include <bits/stdc++.h>
using namespace std;

string s;
int K;

void solve() {
    cin >> s >> K;
    vector<deque<int>> check(26, deque<int> ());
    int min_len=s.size()+1, max_len=0;
    for (int i = 0; i < s.size(); i++)
    {
        check[s[i]-'a'].push_back(i);
        if (check[s[i]-'a'].size()>K) check[s[i]-'a'].pop_front();
        if (check[s[i]-'a'].size()==K)
        {
            if (check[s[i]-'a'].back()-check[s[i]-'a'].front()+1<min_len) min_len=check[s[i]-'a'].back()-check[s[i]-'a'].front()+1;
            if (check[s[i]-'a'].back()-check[s[i]-'a'].front()+1>max_len) max_len=check[s[i]-'a'].back()-check[s[i]-'a'].front()+1;
        }
    }
    if (min_len==s.size()+1 && max_len==0) cout << -1;
    else cout << min_len << ' ' << max_len;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        solve();
        cout << '\n';
    }
}