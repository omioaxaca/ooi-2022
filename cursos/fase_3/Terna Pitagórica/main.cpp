// https://es.wikibooks.org/wiki/Matem%C3%A1ticas/Ecuaciones/Ecuaci%C3%B3n_Pitag%C3%B3rica

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    for (int a = 1; a < 1000; a++) {
        for (int b = a+1; b < 1000; b++) {
            int c = sqrt(a*a + b*b);

            if ( c*c == a*a + b*b && (a + b + c) == 1000) {
                cout << a << " " << b << " " << c << " " << a * b * c << endl;
            }
        }
    }

    return 0;
}
