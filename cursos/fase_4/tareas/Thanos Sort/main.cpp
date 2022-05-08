// https://omegaup.com/arena/problem/Thanos-Sort/#problems

#include <bits/stdc++.h>

using namespace std;

bool is_sorted(vector<int> &numbers, int from, int to) {
    for (int i = from; i < to - 1; i++) {
        if (numbers[i] > numbers[i+1]) {
            return false;
        }
    }

    return true;
}

int main () {
    int N, num;
    vector<int> numbers;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> num;
        numbers.push_back(num);
    }

    int from = 0, to = numbers.size();
    while (!is_sorted(numbers, from, to)) {
        from += (to - from) / 2;
    }

    cout << to - from << endl;


    return 0;
}
