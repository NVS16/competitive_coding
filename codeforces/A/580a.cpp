#include <iostream>

using namespace std;

int solve()
{
    int n, num, maxLen = 0, prev = -1, currLen = 0;

    cin >> n;

    while (n--) {
        cin >> num;
        if (num >= prev) {
            currLen++;
        } else {
            maxLen = max(currLen, maxLen);
            currLen = 1;
        }
        prev = num;
    }

    maxLen = max(maxLen, currLen);

    return maxLen;

}

int main()
{
    cout << solve() << '\n';
    return 0;
}