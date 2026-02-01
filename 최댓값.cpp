<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int max=0,a,b;
    vector<vector<int>> A(9, vector<int>(9, 0));
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> A[i][j];
            if (A[i][j]>=max)
            {
                max=A[i][j];
                a=i;
                b=j;
            }
        }
    }
    cout << max << '\n' << a+1 << ' ' << b+1;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
=======
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int max=0,a,b;
    vector<vector<int>> A(9, vector<int>(9, 0));
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> A[i][j];
            if (A[i][j]>=max)
            {
                max=A[i][j];
                a=i;
                b=j;
            }
        }
    }
    cout << max << '\n' << a+1 << ' ' << b+1;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
}