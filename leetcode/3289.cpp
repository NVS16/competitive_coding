#include <iostream>
#include <vector>

using namespace std;

int countElements(vector<int>& arr) 
{
    vector<bool> table(1001);
    int n = arr.size(), ctr = 0;
    
    for (int i = 0; i < n; i++) {
        table[arr[i]] = true;
        arr[i]++;
    }

    for (int num:arr) {
        if (table[num]) ctr++;
    }

    return ctr;
}

int main()
{
    int n, num;
    vector<int> arr;

    cin >> n;

    while (n--) {
        cin >> num;
        arr.push_back(num);
    }

    cout << countElements(arr) << '\n';

    return 0;
}