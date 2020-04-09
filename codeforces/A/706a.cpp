#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>

using namespace std;

typedef pair<int, int> pii;

double calcTime(pii O, pii P, double v)
{
    double dist = sqrt(pow(O.first - P.first, 2) + pow(O.second - P.second, 2));

    return dist / v;
}

double solve()
{
    int a, b, n, x, y;
    double minTime = 283, v;
    pii O, P;

    cin >> a >> b;
    O.first = a;
    O.second = b;

    cin >> n;

    while (n--) {
        cin >> x >> y >> v;
        P.first = x;
        P.second = y;

        minTime = min(minTime, calcTime(O, P, v));
    }

    return minTime;
}

int main()
{
    cout << setprecision(numeric_limits<double>::digits10 + 1) << solve() << '\n';
    return 0;
}