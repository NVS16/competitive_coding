#include <bits/stdc++.h>

using namespace std;


int maxArr(vector<int> &A) 
{
    int n = A.size(), maxD1 = INT_MIN, maxD2 = INT_MIN, minD1 = INT_MAX, minD2 = INT_MAX;

    for (int i = 0; i < n; i++) {
        maxD1 = max(maxD1, A[i] + i);
        maxD2 = max(maxD2, A[i] - i);
        minD1 = min(minD1, A[i] + i);
        minD2 = min(minD2, A[i] - i);
    } 

    return max(maxD1 - minD1, maxD2 - minD2);
}

int main()
{int n;
    vector<int> A;

    while (cin >> n) {
        A.push_back(n);
    }

    cout << maxArr(A) << '\n';
    return 0;
}