// https://omegaup.com/arena/problem/What-is-love/

#include <bits/stdc++.h>

using namespace std;

int main () {
    int N;
    string w1, w2;
    vector<int> pos;

    cin >> N;
    getchar();

    getline(cin, w1);
    getline(cin, w2);

    int i=0, j=0;
    while(i < w1.size() && j < w2.size()) {
        if (w1[i] == w2[j]) {
            i++;
            pos.push_back(j);
        }
        j++;
    }

    if (i == w1.size()) {
        cout << "YES" << endl;
        for (int i = 0; i < pos.size(); i++) {
            cout << pos[i] << endl;
        }
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
