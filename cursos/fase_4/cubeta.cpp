#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

int main() {
    // input -> Anitalavalatina
    // output ->
    // A: 6
    // B: 0
    // ...
    // Z: 0

    // string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // string input;

    // cin >> input;

    // for (int i = 0; i < input.size(); i++) {
    //     input[i] = toupper(input[i]);
    // }


    // for (int i = 0; i < ABC.size(); i++) {
    //     char buscar = ABC[i];

    //     int cont = 0;
    //     for (int j = 0; j < input.size(); j++) {
    //         char actual = input[j];
    //         if (actual == buscar) {
    //             cont++;
    //         }
    //     }

    //     cout << buscar << " " << cont << endl;
    // }

    // Usar un vector y un solo for

    vector<int> ABC(26, 0);
    string input;

    cin >> input;

    for (int i = 0; i < input.size(); i++) {
        int cint = toupper(input[i]) - 65;
        ABC[cint]++;
    }

    for (int i = 0; i < ABC.size(); i++) {
        // char c = 'A' + i;
        // cout << c << " " << ABC[i] << endl;
        cout << (char)('A' + i) << " " << ABC[i] << endl;
    }

    return 0;
}
