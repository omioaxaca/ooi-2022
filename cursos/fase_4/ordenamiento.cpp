#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {

    vector<int> arr = {4, 12, 45, 62, 2, 9, 0};

    for (auto elm: arr) {
        cout << elm << endl;
    }

    sort(arr.begin(), arr.end());

    for (auto elm: arr) {
        cout << elm << endl;
    }

    return 0;
}
