// https://omegaup.com/arena/problem/Algoritmo-de-Gauss/#problems

#include <iostream>

using namespace std;

int main () {
    int A;

    cin >> A;

    int B = A / 100 + 1;
    int C = 3 * B / 4 - 12;
    int E = A % 19 + 1;
    int F = (8*B +5) / 25 - (5 + C);
    int G = 5*A / 4 - (C + 10);
    int H = (11*E + 20 + F) % 30;
    if (H == 25) {
        if (E > 11) {
            H++;
        }
    }
    if (H == 24) {
        H++;
    }
    int I = 44 - H;
    if (I < 21) {
        I += 30;
    }
    int J = I + 7 - ( (G+I) % 7 );

    if (J <= 31) {
        cout << J << " 3\n";
    } else {
        cout << J - 31 << " 4\n";
    }

    return 0;
}
