#include <iostream>

using namespace std;

int main()
{
    int b, g, n, res;
    
    cin >> b >> g >> n;

    res = n + 1;

    if (b < n) res -= n - b;
    if (g < n) res -= n - g;

    cout << res << '\n';

    return 0;
}