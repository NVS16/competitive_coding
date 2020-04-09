#include <iostream>
#include <vector>

typedef unsigned long long ull;

using namespace std;

void print_store(vector<ull> &store)
{
    for (auto i = store.begin(); i != store.end(); i++) {
        cout << *(i) << " ";
    }
    cout << '\n';
}

int main()
{
    ull n, k, s, curr = 1, dir = 1;
    vector<ull> store;
    cin >> n >> k >> s;
    
    if ((n - 1) * k < s) {
        cout << "NO\n";
    } else {
        while (k) {
            if (s == 0) {
                cout << "NO\n";
                break;
            } else if (s >= n) {
                curr == n ? curr = 1 : curr = n;
                s -= n - 1;
                k--;
                store.push_back(curr);
            } else {
                if (k == 1) {
                    if (curr + 1 >= n) {
                        curr -= s;
                    } else {
                        curr += s;
                    }
                    if (curr > n || curr < 1) {
                        cout << "NO\n";
                    } else {
                        cout << "YES\n";
                        store.push_back(curr);
                        print_store(store);
                    }
                    s = 0;
                    k--;
                } else {
                    if (dir == 1) {
                        curr++;
                        dir--;
                    } else {
                        curr--;
                        dir++;
                    }
                    store.push_back(curr);
                    k--;
                    s--;
                }
            }
        }
    }

    return 0;
}