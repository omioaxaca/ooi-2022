// https://omegaup.com/arena/problem/Carrera-de-Larga-Distancia/#problems

#include <iostream>
#include <string>

using namespace std;

int main() {
    int M, T, U, F, D;

    cin >> M >> T >> U >> F >> D;

    int current_time = 0;
    int distance = 0;
    string step;

    while(T--) {
        cin >> step;

        if (step == "U" || step == "D") {
            if (current_time + U + D > M) {
                break;
            }
            current_time += U + D;
        }

        if (step == "F") {
            if (current_time + F + F > M) {
                break;
            }
            current_time += F + F;
        }

        distance++;
    }

    cout << distance << endl;

    return 0;
}
