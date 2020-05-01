#include <bits/stdc++.h>

using namespace std;

void printPascalNos(vector<vector<int>> nums)
{
    for (vector<int> list:nums) {
        for (int num:list) {
            cout << num << " ";
        }
        cout << '\n';
    }
}

vector<vector<int>> generate(int numRows) 
{
    vector<vector<int>> res;
    vector<int> r;
    int m;

    r.push_back(1);

    res.push_back(r);

    r.clear();

    unsigned long long powers = 1, num;

    for (int i = 1; i < numRows; i++) {
        powers *= 11;
        
        num = powers;

        while (num != 0) {
            m = num % 10;
            r.push_back(m);
            num /= 10;
        }

        res.push_back(r);

        r.clear();

    }

    return res;


}

int main()
{
    int n;

    cin >> n;

    printPascalNos(generate(n));

    return 0;
}