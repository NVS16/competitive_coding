#include <iostream>
#include <string>

using namespace std;

string defangIPaddr(string ip) {
    string res(""), ch;

    for (int i = 0; i < ip.size(); i++) {
        ch = ip[i];
        if (ch == ".") res.append("[.]");
        else res.append(ch);
    }

    return res;
}

int main()
{
    string ip;

    cin >> ip;

    cout << defangIPaddr(ip) << '\n';

    return 0;
}