#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    float T = 100, temp, temprr;

    cout << T << endl;
    srand(time(0));

    for (int i = 0; i < T; i++) {
        temp = rand() / ((RAND_MAX + 1u) / 100);
        cout << temp << endl;
        for (int j = 0; j < temp; j++) {
            temprr = rand() / ((float)(RAND_MAX + 1u));
            temprr > 0.5 ? cout << 1 : cout << 0;
            cout << " "; 
        }
        cout << endl;
    }

    return 0;
}