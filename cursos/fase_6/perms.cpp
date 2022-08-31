#include <bits/stdc++.h>

using namespace std;

void print_vector(vector<int> &set) {
    for (auto elm : set) {
         cout << elm << " ";
    }

    cout << endl;
}

void generate_permutation(int n, vector<int> &vec, vector<bool> &taked) {
    if (vec.size() == n) {
        print_vector(vec);
        return;
    }

    for (int i = 0; i <= n; i++) {
        if (taked[i]) continue;
        taked[i] = true;
        vec.push_back(i);
        generate_permutation(n, vec, taked);
        taked[i] = false;
        vec.pop_back();
    }
}

int main() {

    int size = 3;
    vector<int> vec;
    vector<bool> taked (size, false);

    generate_permutation(size, vec, taked);

    return 0;
}
