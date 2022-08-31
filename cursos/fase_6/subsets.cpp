#include <bits/stdc++.h>

using namespace std;

void print_set(vector<int> &set) {
    for (auto elm : set) {
         cout << elm << " ";
    }

    cout << endl;
}

void generate_set(int n, int k, vector<int>& set) {
    if (k == n+1) {
        print_set(set);
        return;
    }

    set.push_back(k);
    generate_set(n, k+1, set);
    set.pop_back();
    generate_set(n, k+1, set);
}

int main() {

    vector<int> set;

    generate_set(5, 0, set);

    return 0;
}
