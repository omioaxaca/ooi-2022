// Factorizacion prima
// Definimos el numero N como el numero a factorizar
// Para todos los primos menores a N
//   Dividir N entre el primo
//   residuo = N % primo
//   Si el residuo es 0:
//      primo es un factor de N
//      mientras N sea divisible entre primo
//          N = N / primo
//  Mover al siguiente primo
#include <bits/stdc++.h>

using namespace std;

// Lista de numeros primos.
vector<int> primos = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

vector<int> factorizar(int N) {
    vector<int> factores;
    // Probar con todos los primos menores al numero.
    for (int i = 0; primos[i] <= N; ++i) { // O(1000)
        // Dividir el numero tantas veces como sea posible entre el factor.
        while (N % primos[i] == 0) { // O(64)
            N = N / primos[i];
            // Guardar el factor en nuestra lista.
            factores.push_back(primos[i]);
        }
    }
    return factores;
}

vector<int> factorizarOptimizado(int N) {
    vector<int> factores;
    int valorActual = N;
    // Probar con todos los primos menores la raiz cuadrada del numero.
    int limite = sqrt(N);
    for (int i = 0; primos[i] <= limite; ++i) { // O(1000)
        // Dividir el numero tantas veces como sea posible entre el factor.
        while (valorActual % primos[i] == 0) { // O(64)
            valorActual = valorActual / primos[i];
            // Guardar el factor en nuestra lista.
            factores.push_back(primos[i]);
        }
    }
    // Al final, si el residuo es mayor que 1, entonces dicho residuo tambien es primo
    // y por lo tanto es un factor de N.
    if (valorActual > 1) {
        factores.push_back(valorActual);
    }
    return factores;
}

int main() {
    int N;
    cin >> N;
    cout << "Factores primos de " << N << ":\n";
    
    vector<int> factores = factorizar(N);
    for (int i = 0; i < factores.size(); ++i) {
        cout << factores[i] << " ";
    }
    cout << endl;
    
    cout << "Factores primos de " << N << ":\n";
    vector<int> factores2 = factorizarOptimizado(N);
    for (int i = 0; i < factores2.size(); ++i) {
        cout << factores2[i] << " ";
    }
    

    return 0;
}
