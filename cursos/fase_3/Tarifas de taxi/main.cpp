#include <iostream>

using namespace std;

int main() {
    int B, M, S, T;

    cin >> B >> M >> S >> T;

    int P = 0, C = B, Q = 0;
    int pos = 0, last_pos = 0;

    while (T--) {
        last_pos = pos;
        cin >> pos;

        Q ++;
        P += pos - last_pos;

        if (P >= M) {
            C += P / M;
            P %= M;
            Q = 0;
        } else if (Q == S) {
            Q = 0;
            P = 0;
            C ++;
        }
    }

    cout << C << endl;

    return 0;
}
