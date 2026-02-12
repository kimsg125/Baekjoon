<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string name, grade;
    double credit, sum=0, credit_sum=0;
    for (int i = 0; i < 20; i++)
    {
        double g = 0;
        cin >> name >> credit >> grade;
        if (grade != "P")
        {
            if (grade[0] == 'A') g=4;
            else if (grade[0] == 'B') g=3;
            else if (grade[0] == 'C') g=2;
            else if (grade[0] == 'D') g=1;
            else if (grade[0] == 'F') g=0;
            if (grade[1] == '+') g+=0.5;
            credit_sum+=credit;
        }
        sum+=credit*g;
    }
    cout << sum/credit_sum;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
=======
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    string name, grade;
    double credit, sum=0, credit_sum=0;
    for (int i = 0; i < 20; i++)
    {
        double g = 0;
        cin >> name >> credit >> grade;
        if (grade != "P")
        {
            if (grade[0] == 'A') g=4;
            else if (grade[0] == 'B') g=3;
            else if (grade[0] == 'C') g=2;
            else if (grade[0] == 'D') g=1;
            else if (grade[0] == 'F') g=0;
            if (grade[1] == '+') g+=0.5;
            credit_sum+=credit;
        }
        sum+=credit*g;
    }
    cout << sum/credit_sum;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
}