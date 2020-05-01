#include <bits/stdc++.h>

using namespace std;

int sellStock(vector<int> &prices)
{
    int prev = INT_MAX, profit = 0;

    for (int p:prices) {
        if (p > prev) {
            profit += p - prev;
        }
        prev = p;
    }

    return profit;
}

int main()
{
    vector<int> prices;
    int n, num;

    cin >> n;

    while (n--) {
        cin >> num;
        prices.push_back(num);
    }

    cout << sellStock(prices) << '\n';
    
    return 0;
}