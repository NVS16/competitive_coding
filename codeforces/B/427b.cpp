#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, t, c, ctr = 0, num, diff;
    vector<int> vec;
    vec.push_back(-1);

    cin >> n >> t >> c;

    for (int i = 0; i < n; i++) {
        cin >> num;

        if (num > t) vec.push_back(i);
    }

    vec.push_back(n);

    for (int i = 1; i < vec.size(); i++) {
        diff = vec[i] - vec[i - 1];
        ctr += max(diff - c, 0);
    }

    cout << ctr << '\n';

    return 0;
}