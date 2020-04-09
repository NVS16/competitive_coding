#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T, n, prev, curr;
    bool flag;

    cin >> T;

    while(T--) {
        cin >> n;
        prev = -200;
        flag = true;
        for (int i = 0; i < n; i++) {
            cin >> curr;
            if  (curr) {
                if (i - prev >= 6) {
                    prev = i;
                    // cout << "Prev : " << prev << endl;
                } else {
                    flag = false;
                    // cout << "prvv " << prev << endl;
                }
            }
        }

        flag ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}