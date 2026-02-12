#include <bits/stdc++.h>
using namespace std;

typedef pair<string, int> psi;

int N, M;
string s;
vector<string> vocab;
map<string, int> m;

bool cmp(string a, string b)
{
    if (m[a]==m[b] && a.size()==b.size()) return a<b;
    if (m[a]==m[b]) return a.size()>b.size();
    return m[a]>m[b];
}

void solve() {
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        if (s.size()>=M)
        {
            if (!m[s]) vocab.push_back(s);
            m[s]++;
        }
    }
    sort(vocab.begin(),vocab.end(),cmp);
    for (int i = 0; i < vocab.size(); i++) cout << vocab[i] << '\n';
}

int main() {
    solve();
}