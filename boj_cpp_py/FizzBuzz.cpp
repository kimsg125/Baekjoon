<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string A, B, C;
    int n;
    cin >> A >> B >> C;
    if (A!="Fizz" && A!="Buzz" && A!="FizzBuzz")
    {
        n=stoi(A)+3;
        if (n%5==0) cout << "Buzz";
        else cout << n;
    }
    else if (B!="Fizz" && B!="Buzz" && B!="FizzBuzz")
    {
        n=stoi(B)+2;
        if (n%3==0 && n%5==0) cout << "FizzBuzz";
        else if (n%3==0 && n%5!=0) cout << "Fizz";
        else if (n%3!=0 && n%5==0) cout << "Buzz";
        else cout << n;
    }
    else
    {
        n=stoi(C)+1;
        if (n%3==0 && n%5==0) cout << "FizzBuzz";
        else if (n%3==0 && n%5!=0) cout << "Fizz";
        else if (n%3!=0 && n%5==0) cout << "Buzz";
        else cout << n;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
=======
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string A, B, C;
    int n;
    cin >> A >> B >> C;
    if (A!="Fizz" && A!="Buzz" && A!="FizzBuzz")
    {
        n=stoi(A)+3;
        if (n%5==0) cout << "Buzz";
        else cout << n;
    }
    else if (B!="Fizz" && B!="Buzz" && B!="FizzBuzz")
    {
        n=stoi(B)+2;
        if (n%3==0 && n%5==0) cout << "FizzBuzz";
        else if (n%3==0 && n%5!=0) cout << "Fizz";
        else if (n%3!=0 && n%5==0) cout << "Buzz";
        else cout << n;
    }
    else
    {
        n=stoi(C)+1;
        if (n%3==0 && n%5==0) cout << "FizzBuzz";
        else if (n%3==0 && n%5!=0) cout << "Fizz";
        else if (n%3!=0 && n%5==0) cout << "Buzz";
        else cout << n;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
}