// https://omegaup.com/arena/problem/Suma-de-mayor-y-menor/

#include <bits/stdc++.h>

using namespace std;

int main () {
    int N, num;
    cin >> N;

    // ==== Solución 1 ====
    vector<int> numbers;
    while (N--) {
        cin >> num;
        numbers.push_back(num);
    }

    int n_max = numbers[0];
    int n_min = numbers[0];

    for (int i = 1; i < numbers.size(); i++) {
        n_max = max(n_max, numbers[i]);
        n_min = min(n_min, numbers[i]);
    }

    cout << n_max + n_min << endl;

    // ==== Solución 2 ====
    // int n_max, n_min;

    // for (int i = 0; i < N; i++) {
    //     cin >> num;

    //     if (i == 0) {
    //         n_max = num;
    //         n_min = num;
    //     } else {
    //         n_max = max(n_max, num);
    //         n_min = min(n_min, num);
    //     }
    // }

    // cout << n_max + n_min << endl;


    return 0;
}
