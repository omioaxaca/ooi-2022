#include <iostream>

using namespace std;

int main () {
    int n_bags;
    int price, quantity;
    int total = 0;

    cin >> n_bags; // 5

    // while (n_bags--) { // 4
    //     // cout << n_bags << endl;
    //     cin >> quantity >> price;
    //     total += quantity * price;
    // }

    for (int i = 0; i < n_bags; i++) {
        cin >> quantity >> price;
        total += quantity * price;
    }

    cout << total << endl;

    return 0;
}
