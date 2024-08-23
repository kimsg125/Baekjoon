#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string S;
    cin >> S;
    int n = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if ((S[i]=='c' && S[i+1]=='=')||(S[i]=='c' && S[i+1]=='-')||(S[i]=='d' && S[i+1]=='-')||(S[i]=='l' && S[i+1]=='j')||(S[i]=='n' && S[i+1]=='j')||(S[i]=='s' && S[i+1]=='=')||(S[i]=='z' && S[i+1]=='=')){
            i++;
            n++;
        }
        else if (S[i]=='d' && S[i+1]=='z' && S[i+2]=='='){
            i+=2;
            n++;
        }
        else n++;
    }
    cout << n;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}