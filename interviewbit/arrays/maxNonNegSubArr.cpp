#include <bits/stdc++.h>

using namespace std;

vector<int> maxset(vector<int> &A) {
    int  N = A.size();
    vector<int> res;
     long long mi = 0, mj = N - 1, s = 0, sum = 0, maxSum = 0;
    for (int i = 0; i < N; i++) {
        cout << i << endl;
        if (A[i] >= 0) {
            sum += A[i];
            cout << sum << endl;
        } else {
            if (sum > maxSum) {
                cout << sum << " " << maxSum << endl;
                maxSum = sum;
                mi = s;
                mj = i - 1;
            }
            s = i + 1;
            sum = 0;
        }
    }
    
    cout << maxSum << endl;
    
    for (int i = mi; i <= mj; i++) {
        res.push_back(A[i]);
    }
    
    return res;
}


int main()
{
    int n;
    vector<int> A;

    while (cin >> n) {
        A.push_back(n);
    }

    vector<int> res = maxset(A);

    for (int num:res) {
        cout << num << " " << endl;
    }
    return 0;
}