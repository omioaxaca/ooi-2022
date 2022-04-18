// https://omegaup.com/arena/problem/L--OMI2010-Saltos/

#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    long long int m, n;
    long long int a, d;

    cin >> m >> n;
    cin >> a >> d;

    // Saltos para llegar a la misma fila
    long long int jumps_a = m * a / __gcd(m, a) / a;
    // Saltos para llegar a la misma columna
    long long int jumps_b = n * d / __gcd(n, d) / d;

    // mcm de los saltos
    long long int total_jumps = jumps_a * jumps_b / __gcd(jumps_a, jumps_b);

    cout << total_jumps << endl;

    return 0;
}
