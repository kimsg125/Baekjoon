#include <bits/stdc++.h>
using namespace std;

string S, T;
bool able=false;

void game(string S, string T)
{
    if (S==T)
    {
        cout << 1;
        exit(0);
    }
    if (S.size()>=T.size()) return;
    if (T[T.size()-1]=='A') game(S,T.substr(0,T.size()-1));
    if (T[0]=='B')
    {
        reverse(T.begin(),T.end());
        game(S,T.substr(0,T.size()-1));
    }
}

void solve() {
    cin >> S >> T;
    game(S,T);
    cout << 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
}