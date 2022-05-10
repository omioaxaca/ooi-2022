#include <bits/stdc++.h>

using namespace std;

void print(vector<int> arr) {
    for (auto elm : arr) {
        cout << elm << " ";
    }
    cout << endl;
}

vector<int> f1(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        arr[i] *= arr[i];
    }
    return arr;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    print(arr);

    vector<int> arr2 = f1(arr);

    print(arr);
    print(arr2);

    return 0;
}
