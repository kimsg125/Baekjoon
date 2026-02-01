#include <bits/stdc++.h>
using namespace std;

int N, M;
string s;

void solve() {
    cin >> N >> M;
    unordered_set<string> v(N);
    vector<int> cnt(N);
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        v.insert(s);
    }
    for (int i = 0; i < M; i++)
    {
        cin >> s;
        s+=",";

        string str;
        int start=0, end=0;
        while (start<s.size())
        {
            end=s.find(',',start);
            str=s.substr(start,end-start);
            if (v.find(str)!=v.end()) v.erase(str);
            start=end+1;
        }
        cout << v.size() << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
}