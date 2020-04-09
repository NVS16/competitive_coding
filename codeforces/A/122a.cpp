#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, flag = 0;

    vector<int> magicNums = {4, 7, 44, 77, 47, 74, 444, 447, 474, 744, 477, 747, 774, 777};

    cin >> n;

    for (int num:magicNums) {
        if (n % num == 0) {
            flag = 1;
            break;
        } 
    }

    flag ? cout << "YES\n" : cout << "NO\n";
    
    return 0;
}