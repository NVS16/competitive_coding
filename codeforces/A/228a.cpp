#include <iostream>
#include <map>

using namespace std;

int main()
{
    int a, b, c, d;
    map<int, int> myMap;

    cin >> a >> b >> c >> d;

    myMap[a] += 1;
    myMap[b] += 1;
    myMap[c] += 1;
    myMap[d] += 1;

    cout << 4 - myMap.size() << '\n';
    
    return 0;
}