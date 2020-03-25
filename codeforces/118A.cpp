#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    char c;
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};
    while ((cin >> c) && ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))) {
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }
        
        if (find(vowels.begin(), vowels.end(), c) == vowels.end()) {
            cout << '.' << c;
        } 
    }
    cout << "\n";

    return 0;
}