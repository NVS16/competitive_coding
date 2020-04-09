#include <iostream>

using namespace std;

int main()
{
    int N, ctr = 0;
    char ch;

    cin >> N;

    while (N--) {
        ch = getchar();
        if (ch == 'A') 
            ctr++;
        else if (ch == 'D')
            ctr--;
        else N++;
    }

    if (ctr > 0) cout << "Anton\n";
    else if (ctr == 0) cout << "Friendship\n";
    else cout << "Danik\n";

    return 0;
}