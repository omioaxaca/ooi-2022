#include <iostream>

using namespace std;

int main () {
    int n, u, d;

    int time = 0;
    int climbed = 0;

    cin >> n >> u >> d;

    while (true) {
        // Escalada
        time ++;
        climbed += u;

        if (climbed >= n) {
            break;
        }

        // Descanso
        time ++;
        climbed -= d;
    }

    cout << time << endl;

    return 0;
}
