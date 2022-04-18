// https://omegaup.com/arena/problem/numdig/

// https://mathworld.wolfram.com/SmarandacheNumber.html

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int d = log10(n) + 1;
    int D = (n + 1) * d - (pow(10, d) - 1) / 9;

    cout << D << endl;

    return 0;
}
