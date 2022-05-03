// https://omegaup.com/arena/problem/COMI-Canchas/#problems

#include <iostream>

using namespace std;

int main() {
    int r1_x1, r1_x2, r1_y1, r1_y2;
    int r2_x1, r2_x2, r2_y1, r2_y2;
    int x1, x2, y1, y2;

    cin >> r1_x1 >> r1_y1 >> r1_x2 >> r1_y2;
    cin >> r2_x1 >> r2_y1 >> r2_x2 >> r2_y2;

    int area1 = abs(r1_x2 - r1_x1) * abs(r1_y2 - r1_y1);
    int area2 = abs(r2_x2 - r2_x1) * abs(r2_y2 - r2_y1);

    int x_dist = min(r1_x2, r2_x2) - max(r1_x1, r2_x1);
    int y_dist = min(r1_y2, r2_y2) - max(r1_y1, r2_y1);

    int areaI = 0;
    if (x_dist > 0 && y_dist > 0) {
        x_dist * y_dist;
    }

    cout << area1 + area2 - areaI << endl;
}
