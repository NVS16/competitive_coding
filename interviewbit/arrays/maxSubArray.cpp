#include <iostream>
#include <vector>

using namespace std;

int maxSubArray(vector<int> &A) {
    int n = A.size(), maxSum = 0, currSum = 0;
    
    for (int num:A) {
        currSum += num;

        if (currSum < 0) currSum = 0;
        else maxSum = max(maxSum, currSum);

    }

    return maxSum;
}

int main ()
{
    int n;
    vector<int> A;

    while (cin >> n) {
        A.push_back(n);
    }

    cout << maxSubArray(A) << '\n';

    return 0;
}
