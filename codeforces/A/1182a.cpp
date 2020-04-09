#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;

    cin >> n;

    if (n % 2 == 0) cout << (1 << (n / 2))  << '\n';
    else cout << 0 << '\n';

    return 0;
}