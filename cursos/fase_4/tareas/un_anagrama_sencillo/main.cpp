// https://omegaup.com/arena/problem/un_anagrama_sencillo/

#include <bits/stdc++.h>

using namespace std;

int main() {
    string w1, w2;
    vector<int> count_w1(26, 0), count_w2(26, 0);

    cin >> w1 >> w2;

    if (w1.size() != w2.size()) {
        cout << "Las cadenas tienen longitud diferente. ";
        cout << "Operacion Cancelada!" << endl;
        return 0;
    }

    // ==== Solution 1 =====
    for (auto chr : w1) {
        count_w1[chr - 'a'] ++;
    }

    for (auto chr : w2) {
        count_w2[chr - 'a'] ++;
    }

    for (int i = 0; i < 26; i++) {
        if (count_w1[i] != count_w2[i]) {
            cout << "NO es un Anagrama!" << endl;
            return 0;
        }
    }

    cout << "SI es un ANAGRAMA!" << endl;

    // ==== Solution 2 ====

    // sort(w1.begin(), w1.end());
    // sort(w2.begin(), w2.end());

    // if (w1 == w2) {
    //     cout << "SI es un ANAGRAMA!" << endl;
    // } else {
    //     cout << "NO es un Anagrama!" << endl;
    // }

    return 0;
}
