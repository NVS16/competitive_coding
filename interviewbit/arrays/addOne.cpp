#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int> &A) {
    int len = A.size(), carry = 1, t;
    for (int i = len - 1; i >= 0; i--) {
        t = A[i] + carry;
        A[i] = t % 10;
        carry = t / 10;
    }
    if (carry) A.insert(A.begin(), 1);
    for (t = 0; t < len; t++) {
        if (A[t]) break;
    }
    A = vector<int>(A.begin() + t, A.end());
    return A;
}

int main ()
{
    int n;
    vector<int> A;

    while (cin >> n) {
        A.push_back(n);
    }

    A = plusOne(A);

    for (int i:A ) {
        cout << i << endl;
    }

    return 0;
}
