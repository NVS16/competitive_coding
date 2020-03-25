#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n, m, a;
    cin >> n >> m >> a;
    cout << (unsigned long long int)(ceil(n / a) * ceil(m / a));
    return 0;
}