#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

ll coins (ll n, ll *table) 
{
    if (n < 12)
        return n;

    if (table[n] != 0)
        return table[n];
    
    table[n] = max(coins(n / 2, table) + coins(n / 3, table) + coins(n / 4, table), n);

    return table[n];
}

int main () 
{
    ll n;

    while (cin >> n) {
        ll *table = new ll [n + 1];
        cout << coins(n, table) << endl;
    }

    return 0;
}