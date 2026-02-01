<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int N, M=0;
    cin >> N;
    if (N <= 9+9)
    {
        for (int i = 1; i < N; i++)
        {
            int sum=0, j=i;
            while (j!=0)
            {
                sum+=(j%10);
                j/=10;
            }
            if (sum+i==N)
            {
                M=i;
                break;
            }
        }
    }
    else if (N <= 99+9+9)
    {
        for (int i = 10; i < N; i++)
        {
            int sum=0, j=i;
            while (j!=0)
            {
                sum+=(j%10);
                j/=10;
            }
            if (sum+i==N)
            {
                M=i;
                break;
            }
        }
    }
    else if (N <= 999+9+9+9)
    {
        for (int i = 100; i < N; i++)
        {
            int sum=0, j=i;
            while (j!=0)
            {
                sum+=(j%10);
                j/=10;
            }
            if (sum+i==N)
            {
                M=i;
                break;
            }
        }
    }
    else if (N <= 9999+9+9+9+9)
    {
        for (int i = 1000; i < N; i++)
        {
            int sum=0, j=i;
            while (j!=0)
            {
                sum+=(j%10);
                j/=10;
            }
            if (sum+i==N)
            {
                M=i;
                break;
            }
        }
    }
    else if (N <= 99999+9+9+9+9+9)
    {
        for (int i = 10000; i < N; i++)
        {
            int sum=0, j=i;
            while (j!=0)
            {
                sum+=(j%10);
                j/=10;
            }
            if (sum+i==N)
            {
                M=i;
                break;
            }
        }
    }
    else
    {
        for (int i = 100000; i < N; i++)
        {
            int sum=0, j=i;
            while (j!=0)
            {
                sum+=(j%10);
                j/=10;
            }
            if (sum+i==N)
            {
                M=i;
                break;
            }
        }
    }
    cout << M;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
=======
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int N, M=0;
    cin >> N;
    if (N <= 9+9)
    {
        for (int i = 1; i < N; i++)
        {
            int sum=0, j=i;
            while (j!=0)
            {
                sum+=(j%10);
                j/=10;
            }
            if (sum+i==N)
            {
                M=i;
                break;
            }
        }
    }
    else if (N <= 99+9+9)
    {
        for (int i = 10; i < N; i++)
        {
            int sum=0, j=i;
            while (j!=0)
            {
                sum+=(j%10);
                j/=10;
            }
            if (sum+i==N)
            {
                M=i;
                break;
            }
        }
    }
    else if (N <= 999+9+9+9)
    {
        for (int i = 100; i < N; i++)
        {
            int sum=0, j=i;
            while (j!=0)
            {
                sum+=(j%10);
                j/=10;
            }
            if (sum+i==N)
            {
                M=i;
                break;
            }
        }
    }
    else if (N <= 9999+9+9+9+9)
    {
        for (int i = 1000; i < N; i++)
        {
            int sum=0, j=i;
            while (j!=0)
            {
                sum+=(j%10);
                j/=10;
            }
            if (sum+i==N)
            {
                M=i;
                break;
            }
        }
    }
    else if (N <= 99999+9+9+9+9+9)
    {
        for (int i = 10000; i < N; i++)
        {
            int sum=0, j=i;
            while (j!=0)
            {
                sum+=(j%10);
                j/=10;
            }
            if (sum+i==N)
            {
                M=i;
                break;
            }
        }
    }
    else
    {
        for (int i = 100000; i < N; i++)
        {
            int sum=0, j=i;
            while (j!=0)
            {
                sum+=(j%10);
                j/=10;
            }
            if (sum+i==N)
            {
                M=i;
                break;
            }
        }
    }
    cout << M;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
>>>>>>> 3ec4de7271082130ed75f098040545cec8e247ee
}