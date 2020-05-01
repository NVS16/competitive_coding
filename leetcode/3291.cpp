#include <iostream>
#include <string>

using namespace std;

bool backspaceCompare(string S, string T) 
{
    int ls = S.size(), lt = T.size(), m = 0, n = 0;

    for (int i = 0; i < ls; i++) {
        if (S[i] == '#') {
            m = max(m - 1, 0);
        } else {
            S[m] = S[i];
            m++;
        }
    }

    for (int i = 0; i < lt; i++) {
        if (T[i] == '#') {
            n = max(n - 1, 0);
        } else {
            T[n] = T[i];
            n++;
        }
    }


    S = S.substr(0, m);
    T = T.substr(0, n);

    return S.compare(T) == 0 ? true : false;
}

int main()
{
    string S, T;

    cin >> S >> T;

    cout << backspaceCompare(S, T) << '\n';

    return 0;
}