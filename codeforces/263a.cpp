#include <iostream>

using namespace std;

int main()
{
    int n, res;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> n;
            if (n) {
                res = abs(i - 3) + abs(j - 3);
            }
        }
    }
    cout << res << '\n';

    return 0;
}