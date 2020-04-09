#include <iostream>

using namespace std;

int main()
{
    int n, i, flag = 0;

    cin >> n;

    while (n--) {
        cin >> i;
        if (i) flag = 1;
    }

    flag ? cout << "HARD\n" : cout << "EASY\n";

    return 0;
}