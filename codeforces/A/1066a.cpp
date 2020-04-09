#include <iostream>
#include <cmath>

using namespace std;

int solve() 
{
    double L, v, l, r, a, b;

    cin >> L >> v >> l >> r;

    // temp = v;

    // while (temp <= L) {
    //     if (temp < l || temp > r) {
    //         ctr++;
    //     }
    //     temp += v;
    // }

    a = ceil(l / v);
    b = floor(r / v);

    return L / v - (b - a + 1);
}

int main()
{
    int t;

    cin >> t;

    while (t--) cout << solve() << '\n';
    return 0;
}