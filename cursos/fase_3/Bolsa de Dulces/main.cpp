// https://omegaup.com/arena/problem/Bolsas-de-dulces/

#include <iostream>

using namespace std;

int main () {
    int n_bags;
    int price, quantity;
    int total = 0;

    cin >> n_bags;

    while (n_bags--) {
        cin >> quantity >> price;
        total += quantity * price;
    }

    cout << total << endl;

    return 0;
}
