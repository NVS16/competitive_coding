#include <iostream>
#include <vector>

using namespace std;

int maxSubArray(vector<int> &A) {
    int n = A.size(), maxSum = 0, currSum = 0;
    vector<int> table(n);
    table[0] = max(0, A[0]);
    for (int i = 0; i < n; i++) {
        if (currSum > currSum + A[i]) {
            if (maxSum < currSum) maxSum = currSum;
            currSum = A[i];
        } else {
            currSum += A[i];
        }
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

    cout << maxSubArray(A);

    return 0;
}
