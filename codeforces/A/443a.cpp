#include <iostream>
#include <map>

using namespace std;

int main()
{
    char ch;
    map<char, bool> myMap;

    while ((ch = getchar()) != '}') {
        if (ch != '{' && ch != ' ' && ch != ',')
            myMap[ch] = true;
    }

    cout << myMap.size() << '\n';

    return 0;
}