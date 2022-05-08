// https://omegaup.com/arena/problem/encontrar-numero-faltante-ovi

#include <bits/stdc++.h>

using namespace std;

int main () {
    int N, num;

    cin >> N;

    // ========== Solución 1 ==========

    vector<bool> numbers(N, false);

    for (int i = 0; i < N-1; i++) {
        cin >> num;
        numbers[num-1] = true;
    }

    for (int i = 0; i < N; i++) {
        if (numbers[i] == false) {
            cout << i+1 << endl;
            break;
        }
    }

    // ========== Solución 2 ==========

    // int sum = 0;
    // for (int i = 0; i < N-1; i++) {
    //     cin >> num;
    //     sum += num;
    // }
    // cout << (N * (N+1)) / 2 - sum << endl;

    return 0;
}
