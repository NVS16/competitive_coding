#include <iostream>
#include  <vector>

using namespace std;

typedef vector<int> vi;

int main()
{
    int n, h, a, ctr = 0;

    vi home, away;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> h >> a;
        home.push_back(h);
        away.push_back(a);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (home[i] == away[j]) {
                ctr++;
            }
        }
    }

    cout << ctr << '\n';

    return 0;
}