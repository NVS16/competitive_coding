#include <iostream>

using namespace std;

int main()
{
    int a, b, diff;

    cin >> a >> b;
    
    diff = b - a;

    if (a == 0 && b == 0) cout << "NO\n";
    else if (diff == 1 || diff == 0 || diff == -1) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}