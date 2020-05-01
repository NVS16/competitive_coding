#include <iostream>
#include <vector>

using namespace std;

void reverseString(vector<char>& s) 
{
    int n = s.size();
    char temp;

    for (int i = 0; i < n / 2; i++) {
        temp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = temp;
    }

}

int main()
{
    int n;
    char ch;

    vector<char> s;

    cin >> n;
    
    ch = getchar();

    while (n--) {
        ch = getchar();
        s.push_back(ch);
    } 

    reverseString(s);

    for (char c:s) {
        cout << c << " ";
    }

    cout << '\n';

    return 0;
}