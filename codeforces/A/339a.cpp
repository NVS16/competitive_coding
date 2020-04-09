#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ctr(3);
    vector<char> res;
    char ch;
    
    while ((ch = getchar()) != '\n') {
        if (ch == '1') {
            ctr[0]++;
        } else if (ch == '2') {
            ctr[1]++;
        } else if (ch == '3') {
            ctr[2]++;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < ctr[i]; j++) {
            res.push_back(49 + i);
            res.push_back('+');
        }
    }

    for (auto i = res.begin(); i != res.end() - 1; i++) {
        cout << *i;
    }

    cout << '\n';

    return 0;
}