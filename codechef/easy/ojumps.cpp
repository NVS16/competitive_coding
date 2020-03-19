#include <iostream>

using namespace std;

int main ()
{
    unsigned long long int a, mod;

    cin >> a;

    mod = a % 6;

    mod == 0 || mod == 1 || mod == 3 ? cout << "yes\n" : cout << "no\n";

    return 0;
}