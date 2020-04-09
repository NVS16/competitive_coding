#include <iostream>

using namespace std;

int main()
{
    int ctr = 0, a, b;

    cin >> a >> b;

    while (a <= b) {
        a *= 3;
        b *= 2;
        ctr++;
    }

    cout << ctr << '\n';

    return 0;
}