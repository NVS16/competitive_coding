#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c, ctr = 0;

    cin >> n;

    while (n--) {
        cin >> a >> b >> c;
        ctr = (a + b + c) >= 2 ? ctr + 1 : ctr;
    }
    
    cout << ctr << "\n";

    return 0;
}