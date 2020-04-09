#include <iostream>

using namespace std;

int main()
{
    int w;
    cin >> w;
    w & 1 || w == 2 ? cout << "NO" : cout << "YES";
    return 0;
}