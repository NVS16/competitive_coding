#include <iostream>

using namespace std;

int main()
{
    int n, k, r;

    cin >> n >> k;

    while (k) {
        r = n % 10;

        if (k > r) {
            k -= (r + 1);
            n /= 10;
        } else {
            n -= k;
            k = 0;
        }
    }

    cout << n << '\n';

    return 0;
}