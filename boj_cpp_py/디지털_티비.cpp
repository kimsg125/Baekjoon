#include <bits/stdc++.h>
using namespace std;

int N, a, b;
string s;

void solve() {
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> s;
        if (s=="KBS1") a=i;
        if (s=="KBS2") b=i;
    }
    for (int i = 0; i < a-1; i++) cout << "1";
    for (int i = 0; i < a-1; i++) cout << "4";
    if (b<a) b++;
    if (b!=2)
    {
        for (int i = 0; i < b-1; i++) cout << "1";
        for (int i = 0; i < b-2; i++) cout << "4";
    }
}

int main() {
    solve();
}