#include <iostream>

using namespace std;

int f(int x) {
    x = x + 10;

    cout << x << endl;

    return x;
}

int main () {
    // int x = 10;

    // int y = f(x);

    // cout << x << " " << y << endl;

    int i = 10;

    while (i--) {
        int i = 2;
        while (i--) {
            cout << i << endl;
        }
    }

    return 0;
}
