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

typedef long long int i64;
typedef long long unsigned int u64;

// El tamanio maximo de la criba depende de los limites del problema.
const int tamanio_criba = 1000000; // 1 millon
// Asumir que todos los numeros entre 1 y el maximo de la criba son primos.
std::vector<bool> esPrimo(tamanio_criba, true);
std::vector<i64> primos;

void llenarCriba() {
  // Marcar los primeros 2 elementos de la criba.
  esPrimo[0] = false;
  esPrimo[1] = false;
  // Recorrer todos los elementos de izquierda a derecha empezando en el primer primo conocido.
  for (int numero = 2; numero < tamanio_criba; ++numero) {
    // si encuentro un numero que es primo, entonces marco
    // todos sus multiplos como no primos.
    if (esPrimo[numero] == true) {
      // Agregar al vector de primos
      primos.push_back(numero);
      for (int multiplo = numero + numero; multiplo < tamanio_criba; multiplo += numero) {
        esPrimo[multiplo] = false;
      }
    }
  }
}

vector<int> factorizarEnPrimos(i64 N) {
    vector<int> factores;
    i64 valorActual = N;
    // Probar con todos los primos menores la raiz cuadrada del numero.
    i64 limite = sqrt(N);
    for (int i = 0; primos[i] <= limite && valorActual > 1; ++i) { // O(1000)
        // Dividir el numero tantas veces como sea posible entre el factor.
        int exponente = 0;
        while (valorActual % primos[i] == 0) { // O(64)
            valorActual = valorActual / primos[i];
            // Guardar el factor en nuestra lista.
            factores.push_back(primos[i]);
            exponente++;
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
    // Precalcular los primos
    llenarCriba();

    i64 N;
    cin >> N;

    cout << "Factores primos de " << N << ":\n";
    vector<int> factores = factorizarEnPrimos(N);
    for (int i = 0; i < factores.size(); ++i) {
        cout << factores[i] << " ";
    }
    

    return 0;
}
