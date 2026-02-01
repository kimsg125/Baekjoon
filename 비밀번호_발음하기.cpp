#include <bits/stdc++.h>
using namespace std;

string s;

void solve() {
    while (true)
    {
        cin >> s;
        if (s=="end") break;
        bool aeiou=false, three_in_row=false, repeated=false;
        int a=0, cnt=0;
        char bef=s[0];
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                aeiou=true;
                if (a==0) cnt++;
                else
                {
                    a=0;
                    cnt=1;
                }
            }
            else
            {
                if (a==1) cnt++;
                else
                {
                    a=1;
                    cnt=1;
                }
            }
            if (cnt==3) three_in_row=true;
            if (i>0 && bef==s[i] && s[i]!='e' && s[i]!='o') repeated=true;
            bef=s[i];
        }
        if (!aeiou || three_in_row || repeated) cout << "<" << s << ">" << " is not acceptable.\n";
        else cout << "<" << s << ">" << " is acceptable.\n";
    }
}

int main() {
    solve();
}