// https://omegaup.com/arena/problem/Calculos-condicionales/#problems

#include <iostream>

using namespace std;

int main () {
    int N;
    int mods = 0;

    cin >> N;

    mods++;
    if (N % 2 == 0) {
        N /= 2;
    } else {
        N++;
    }

    if ( N >= 100) {
        mods++;
        N /= 100;
    } else if(N >= 10) {
        mods ++;
        N /= 10;
    }

    if (N % 3 == 0) {
        mods++;
        N--;
    }

    cout << N << " " << mods << endl;

    return 0;
}
