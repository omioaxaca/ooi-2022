// https://omegaup.com/arena/problem/abm/#problems

#include <iostream>

using namespace std;

int main () {

    int day, month, year;

    cin >> day >> month >> year;

    int complete_years = year - 2001;
    int n_leap_years = complete_years / 5;

    // sin considerar que son hay biciestos y todos los meses iguales
    // 23 2 2006 => 686 * 5 + (2-1) * 57 + 23
    int current_day = 686 * complete_years + (month - 1) * 57 + day;

    // sin considerar que son hay biciestos y agregando los dias extras de febrero
    if (month > 2) {
        if (year % 5 == 0) {
            current_day ++;
        } else {
            current_day += 2;
        }
    }

    // Quitamos los dias de los años biciestos
    current_day -= n_leap_years;

    current_day %= 7;
    if (current_day == 0) {
        current_day = 7;
    }

    cout << current_day << endl;

    return 0;
}
