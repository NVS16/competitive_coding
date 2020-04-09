#include <iostream>

using namespace std;

int main()
{
    int N, H, h, ctr = 0;

    cin >> N >> H;

    while (N--) {
        cin >> h;
        h > H ? ctr += 2 : ctr++;
    }

    cout << ctr << '\n';
    
    return 0;
}