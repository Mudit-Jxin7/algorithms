#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int a; cin >> a;
    int b; cin >> b;
    cout << gcd(a , b);

    return 0;
}
