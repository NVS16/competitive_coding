#include <iostream>
#include <vector>

using namespace std;

typedef vector<bool> vb;

int main()
{
    int T, n, x, temp, res, i;

    cin >> T;

    while (T--) {
        cin >> n >> x;
        vb table(101);
        res = 0;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            table[temp] = true;
        }
        for (i = 1; i < 101 && x != 0; i++) {
            if (!table[i]) {
                table[i] = true;
                x--;
            } 
        }

        for (i = 1; i < 101; i++) {
            if (!table[i]) break;
        }

        res = i - 1 + x;
        cout << res << endl;
    }
    return 0;
}