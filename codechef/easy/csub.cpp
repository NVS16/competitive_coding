#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


unsigned long long int csub(string str) 
{   
    unsigned long long int cnt = count(str.begin(), str.end(), '1'); 
    return cnt * (cnt + 1) / 2;
}

int main() 
{
    int T, n;
    string str;

    cin >> T;

    while (T--) {
        cin >> n >> str;
        cout << csub(str) << endl;
    }

    return 0;
}