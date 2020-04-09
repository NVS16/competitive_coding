#include <iostream>
#include <unordered_set>

using namespace std;

int f(int num)
{
    int r, sum = 0;

    while (num != 0) {
        r = num % 10;
        sum += r * r;
        num /= 10;
    }

    return sum;
}

bool isHappy(int n) 
{
    unordered_set<int> visited;

    while (true) {
        n = f(n);
        if (n == 1) return true;

        if (visited.count(n) == 1) return false;

        visited.insert(n);
    }

    return true;
}

int main()
{
    int n;

    cin >> n;

    cout << isHappy(n) << '\n';

    return 0;
}