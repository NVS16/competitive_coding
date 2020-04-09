#include <iostream>
#include <string>

using namespace std;

int main()
{
    int currCtr = 0, maxCtr = 0;
    char ch, currCh = '0';
    string s;

    cin >> s;

    for (auto i = s.begin(); i != s.end(); i++) {
        ch = *i;
        if (ch != currCh) {
            currCh = ch;
            maxCtr = max(maxCtr, currCtr);
            currCtr = 1;
        } else {
            currCtr++;
        }
    }

    maxCtr = max(maxCtr, currCtr);

    maxCtr >= 7 ? cout << "YES\n" : cout << "NO\n";

    return 0;
}