// Encontrar los divisores de un numero e imprimirlos en orden.
// Considerar que el valor maximo puede ser 2^32.
#include <bits/stdc++.h>

using namespace std;

// El metodo intuitivo consiste en recorrer todos los numeros del 1 al n.
// Complejidad: O(n)
void buscarDivisores(int n) {
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            cout << i << endl;
        }
    }
}

// Un metodo apoyado de un analisis matematico, nos dice que es suficiente
// con recorrer los numero hasta la raiz cuadrada del numero n.
// Complejidad: O(raiz(n))
// Nota que al utilizar el ordenamiento de los divisores,
// la complejidad total puede ser O(raiz(n)log(raiz(n))).
void buscarDivisoresRapido(int n) {
    vector<int> divisores;
    int limite = sqrt(n);
    for (int i = 1; i <= limite; ++i) {
        if (n % i == 0) {
            // cout << i << endl;
            // cout << n/i << endl;
            divisores.push_back(i);
            if (i * i == n) {
                continue;
            }
            divisores.push_back(n/i);
        }
    }
    // Ordenar los resultados de menor a mayor
    sort(divisores.begin(), divisores.end());
    for (int i = 0; i < divisores.size(); ++i) {
        cout << divisores[i] << endl;
    }
}

int main() {
    int n;
    cin >> n;
    cout << "Divisores con metodo normal\n";
    buscarDivisores(n);
    cout << "Divisores con metodo rapido\n";
    buscarDivisoresRapido(n);


    return 0;
}