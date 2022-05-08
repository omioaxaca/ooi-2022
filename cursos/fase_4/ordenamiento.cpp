#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {

    vector<int> arr = {12, 4, 45, 62, 2, 9, 0};

    sort(arr.begin()+1, arr.end()-1);

    for (auto elm: arr) {
        cout << elm << endl;
    }

    return 0;
}
