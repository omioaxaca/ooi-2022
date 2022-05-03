#include <iostream>
#include <vector>

using namespace std;

// int funcion(int x, int y) {
//     return x + y;
// }


int max(int c, int d) {
    if (c >= d) {
        return c;
    }

    return d;
}

int main() {
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int m1 = max(a, b);
    int m2 = max(m1, c);
    int m3 = max(m2, d);
    cout << m3 << endl;

    cout << max(max(max(a, b), c), d) << endl;

    return 0;
}
