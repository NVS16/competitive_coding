#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) 
{
    int minPrice = INT_MAX, maxPr= 0;

    for (int p:prices) {
        if (p < minPrice) {
            minPrice = p;
        } else {
            maxPr = max(maxPr, p - minPrice);
        }
    }

    return maxPr;
}

int main()
{
    int n, num;

    vector<int> nums;

    cin >> n;

    while (n--) {
        cin >> num;
        nums.push_back(num);
    }

    cout << maxProfit(nums) << '\n';

    return 0;
}