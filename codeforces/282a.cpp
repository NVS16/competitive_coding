#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, ctr = 0;
    string s;

    cin >> n;

    while (n--) {
        cin >> s;

        ctr = s[1] == '+' ? ctr + 1 : ctr - 1;
    }
    cout << ctr << "\n";

    return 0;
}