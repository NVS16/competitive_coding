#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, coin, sum = 0, mySum= 0, ctr = 0;

    vector<int> coins;

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> coin;
        sum += coin;
        coins.push_back(coin);
    }

    sort(coins.begin(), coins.end(), greater<int>());

    for (int i:coins) {
        mySum += i;
        sum -= i;
        ctr++;
        if (mySum > sum) break;
    }

    cout << ctr << '\n';
    
    return 0;
}